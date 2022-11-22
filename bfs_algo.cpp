#include <bits/stdc++.h>
using namespace std;
const int N = 10e+3;
vector<int> g[N];
int vis[N];
int level[N];
void bfs(int source) {
	queue<int>q;
	q.push(source);
	vis[source] = 1;

	while (!q.empty()) {
		int crt_ver = q.front();
		q.pop();
		cout <<  crt_ver << " "; ///  order of vetex in q
		for (int child : g[crt_ver]) {
			if (!vis[child]) {
				q.push(child);
				vis[child] = 1;
				level[child] = level[crt_ver] + 1; // to store the level of each vertex
			}
		}
	}
}
int main()
{
	int v;
	cin >> v;
	for (int i = 1 ; i <= v; ++i)
	{
		int v1, v2; cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	bfs(1);
	cout << endl;
	for (int i = 1 ; i <= v; ++i)
	{
		cout << i << " " << level[i] << endl;
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
// 9 11


// 1 2 3 13 5 4 6 7 8 9 10 12 11 
// 1 0
// 2 1
// 3 1
// 4 2
// 5 2
// 6 3
// 7 3
// 8 3
// 9 3
// 10 3
// 11 4
// 12 4
// 13 1

