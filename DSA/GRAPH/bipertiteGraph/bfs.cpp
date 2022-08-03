

const int N = 1e5 + 7;
vector<int> graph[N];
int vis[N];
int col[N];
bool BFS_bipaterate(int source) {
    queue<pair<int, int>> q;
    col[source] = 1;
    q.push({source, 1});
    vis[source] = 1;
    while (!q.empty()) {
        int curt_node = q.front().first;
        int curt_colo = q.front().second;
        cout<<curt_node << " "<<curt_colo <<endl;
        q.pop();
        for (auto it : graph[curt_node]) {
            if (vis[it] == 0) {
                vis[it] = 1;
                col[it] = !curt_colo;
                q.push({it, !curt_colo}); // i will node and its color 

            }
            else if (vis[it] == 1 && col[it] == curt_colo) {
                return true;
            }
        }
    }
    return false;
}
