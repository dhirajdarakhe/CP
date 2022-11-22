// https://www.interviewbit.com/problems/delete-edge/

#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9 + 7;
void dfs(int vertex, int par, vector<int> &sum_subarray, int *A, vector<int> g[])
{
	sum_subarray[vertex] += A[vertex - 1];
	for (int child : g[vertex])
	{
		dfs(child, vertex, sum_subarray, A, g);
		sum_subarray[vertex] += sum_subarray[vertex - 1];
	}
}
int deleteEdge(int *A, int n1, int **B, int n21, int n22)
{

	vector<int> g[n1];
	for (int i = 0; i < n21; ++i)
	{
		g[B[i][1]].push_back(B[i][0]);
		g[B[i][0]].push_back(B[i][1]);
	}
	vector<int> sum_subarray(n1);
	dfs(1, 0, sum_subarray, A, g);
    long long ans = 0;
	for (int i = 2; i <= n1; i++)
	{
		int part1 = sum_subarray[i];
		int part2 = sum_subarray[1] - part1;
		ans = max(ans , part1*1LL*part2)% M;
	}
	
	return ans;
}
int main()
{  
	return 0;
}
//  A = [10, 5, 12, 6]
//  B = [

//         [1, 2]
//         [1, 4]
//         [4, 3]
//      ]