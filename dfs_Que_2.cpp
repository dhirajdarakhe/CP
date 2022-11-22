// check cycle is present or not

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int>graph[N];
bool vis[N];
bool DFS(int vertex, int parent) {
	vis[vertex] = true;
	bool is_cycle_exit = false;
	for (int child : graph[vertex])
	{
		// if(vis[child] && child == parent) continue;
		// if (vis[child]) return true;
		if(vis[child] && child != parent) return true;
        if (vis[child]) continue;
		is_cycle_exit |= DFS(child, vertex);
	}
	return is_cycle_exit;
}
int main()
{
	int v, e; cin >> v >> e;
	for (int i = 0; i < e; ++i)
	{	int v1, v2; cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	bool is_loop_Exist = false;
	for (int i = 1; i <= v; ++ i)
	{
		if (vis[i]) continue;
		if(DFS(i, 0)){
			is_loop_Exist = true;
			break;
		}
	}
	cout<<is_loop_Exist<<endl;
	cout<< (is_loop_Exist ? "YES\n" : "NO\n");
	return 0;
}


