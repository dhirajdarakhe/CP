
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> g[N];
int sum_subtree[N];
int even_ct[N];
void dfs(int vertex, int par = 0){
	sum_subtree[vertex] = vertex;
	if(vertex%2==0) even_ct[vertex]++;
	for(int child: g[vertex]){
		if(child == par) continue;
		dfs(child, vertex);
		sum_subtree[vertex] += sum_subtree[child];
		even_ct[vertex] += even_ct[child];
	}
}
int main()
{ int n; cin >>n;
	for (int i=1;i<=n-1;++i)
	{   int v1,v2;cin>>v1>>v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}dfs(1);
	for(int i=1;i<=n;i++){
		cout<<i<<" "<<sum_subtree[i]<<" " << even_ct[i] <<endl;
	}
  return 0;
}




// 13
// 1 2 
// 1 3
// 1 13
// 2 5
// 5 6
// 5 7
// 5 8
// 8 12
// 3 4
// 4 9
// 4 10
// 10 11

// 1 91 6
// 2 40 4
// 3 37 2
// 4 34 2
// 5 38 3
// 6 6 1
// 7 7 0
// 8 20 2
// 9 9 0
// 10 21 1
// 11 11 0
// 12 12 1
// 13 13 0

