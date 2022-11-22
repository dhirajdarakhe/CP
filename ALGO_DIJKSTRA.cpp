#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5 + 7;
const ll INF = 1e9 + 10;

vector<pair<ll, ll>> g[N];

void Dijkstra(ll source)
{
    vector<int> vis(N, 0);
    vector<int> dist(N, INF);
    set<pair<ll, ll>> st;
    st.insert({0, source});
    dist[source] = 0;
    while (st.size() > 0)   
    {
        auto node = *st.begin();
        st.erase(st.begin());
        // ll dist  = node.first;
        ll v = node.second;
        if (vis[v])
            continue;
        vis[v] = 1;
        for (auto child : g[v])
        {
            ll child_v = child.first;
            ll wt = child.second;
            if (dist[v] + wt < dist[child_v])
            {
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        ll u, v, wt;
        cin >> u, v, wt;
        // algorithm for undirected graph
        g[u].push_back({v, wt});
    }
    return 0;
}