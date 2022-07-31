


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
