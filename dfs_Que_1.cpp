// Q ) find total number of conncted graph from forest , print count and their vertex


// INPUT
// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7

// OUTOUT
// 3
// 1 2 3 5 4 
// 6 7 
// 8

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int>graph[N];
bool vis[N];
vector<int> single_graph;
vector<vector<int>> multiple_graph;
void DFS(int vertex) {
	vis[vertex] = true;
	single_graph.push_back(vertex);
	for (int child : graph[vertex])
	{
		if (vis[child]) continue;
		DFS(child);
	}
}
int main()
{
	int v, e; cin >> v >> e;
	for (int i = 0; i < e; ++i)
	{	int v1, v2; cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	for (int i = 1; i <= v; ++i)
	{
		if (vis[i]) continue;
		single_graph.clear();
		DFS(i);
		multiple_graph.push_back(single_graph);
	}
	cout << multiple_graph.size() << endl;
	for (auto x : multiple_graph) {
		for (int x1 : x) {
			cout << x1 << " ";
		} 	cout << endl;
	}
	return 0;
}


