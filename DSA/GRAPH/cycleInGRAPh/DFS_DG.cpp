
const int N = 1e3 + 10;
vector<int>graph[N];
bool vis[N];
bool mark[N]; // pathVis

bool dfs(int source) {
    vis[source] = 1;
    mark[source] = 1;

    for (auto child : graph[source]) {

        if (vis[child] == 0) {
            if (dfs(child) == true) {
                return true;
            }
        }
        if (vis[child] == 1 && mark[child] == 1) {
            return true;
        }
    }

    mark[source] = 0;
    return false;

}
