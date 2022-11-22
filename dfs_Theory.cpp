
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> graph[N];
bool vis[N];
void dfs( int vertex) {
	// take action on vertex
	// after entering the vertex
	cout << vertex << endl;
	vis[vertex] = true;
	for (int child : graph[vertex])
	{
		//take a action on child
		// before enter the child
		if (vis[child]) continue;
		cout << "parent > " << vertex << " child > " << child << endl;
		dfs(child);
		//take action on child before
		//after existing the child
	}
	// take action on vertex
	// before existing child
	cout<< "Exiting from the loop of "<< vertex<<endl;
}
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		int v1, v2;
		cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	cout << "Done\n";
	dfs(1);
	return 0;
}


// time complexity of dfs > O(V+E);

 
// INPUT
// 6 9
// 1 3
// 1 5
// 3 5
// 3 4
// 3 6
// 3 2
// 2 6
// 4 6
// 5 6


// OUTPUT
// Done
// 1
// parent > 1 child > 3
// 3
// parent > 3 child > 5
// 5
// parent > 5 child > 6
// 6
// parent > 6 child > 2
// 2
// Exiting from the loop of 2
// parent > 6 child > 4
// 4
// Exiting from the loop of 4
// Exiting from the loop of 6
// Exiting from the loop of 5
// Exiting from the loop of 3
// Exiting from the loop of 1
