const int N = 1e3 + 10;
vector<int>graph[N];
bool vis[N];

bool bfs(int source) {
    queue< pair<int, int> > q;
    q.push({source, 0});
    vis[source] = 1;
    while (!q.empty()) {
        int child = q.front().first;
        int pare = q.front().second;
        q.pop();
        for (auto it : graph[child]) {
            if (vis[it] == 1 && it != pare) return true;
            if (!vis[it]) {
                vis[it] = 1;
                q.push({it, child});
            }
        }
    }
    return false;
}
