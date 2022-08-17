


const ll N = 1e5 + 10;
v64 graph[N];
ll vis[N];
v64 depth(N, 0);
vector<double> pribality(N, 1);
void dfs(ll source = 1)
{
    vis[source] = 1;
    for (auto x : graph[source])
    {

        if (vis[x])
            continue;
        if (source == 1)
        {
            pribality[1] = 1;
            pribality[x] = (double)pribality[1] / sz(graph[source]);
        }
        else
        {
            pribality[x] = (double)pribality[source] / (sz(graph[source]) - 1);
        }
        depth[x] += depth[source] + 1;
        dfs(x);
    }
}
