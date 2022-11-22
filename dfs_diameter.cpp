

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3 + 10;
// vector<int> g[N];
// int depth[N];
// void dfs(int vertex, int par = -1) {
// 	for (int child : g[vertex]) {
// 		if (child == par) continue;
// 		depth[child] =1+ depth[vertex];
// 		dfs(child, vertex);
// 	}
// }
// int main()
// {	int n; cin >> n;
// 	for (int i = 1; i <= n - 1; ++i)
// 	{	int v1, v2; cin >> v1 >> v2;
// 		g[v1].push_back(v2);
// 		g[v2].push_back(v1);
// 	}
// 	dfs(3);   // step 1 ) with any node as root find max depth root
// 	int max_depth = -1;
// 	int step_one_max_depth_node = -1;
// 	for (int i = 1; i <= n; ++i)
// 	{
// 	 if(max_depth < depth[i]){
// 	 	max_depth = depth[i];
// 	 	step_one_max_depth_node = i;
// 	 }
// 	 depth[i] = 0;
// 	}
// 	dfs(step_one_max_depth_node);    // step 2 ) with that node as root find max depth which will diameter of the tree
// 	max_depth = -1;
// 	for (int i = 1; i <= n; ++i)
// 	{
// 	  if(max_depth < depth[i]){
// 	 	max_depth = depth[i]; }
// 	}
// 	cout<<max_depth<<endl;
// 	return 0;
// }

