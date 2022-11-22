#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5 + 7;
ll parent[N];
ll size[N];
void make(int v) {
    parent[v] = v;
    size[v] = 1;
}
int find(int v) {
    if (v == parent[v]) return v;
    // path compression
    return parent[v] = find(parent[v]);
}

void Union(int a , int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    //optimise by size
    if (size[b] > size[a]) swap(a, b);
    size[a] += size[b];
    parent[b] = a;
}
// cpxty
// alpha(n); reverseakerman function
// amotarized complexity
int main()
{
    int n , m;
    cin >> n >> m;
    vector<pair<ll, pair<ll, ll>>> edges;
    for (int i = 0; i < m; ++i)
    {
        int u, v , wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }
    for(int i = 1 ; i <= n; ++ i) make(i);
    int t_cost = 0;
    sort(edges.begin(), edges.end());
    for (auto &edge : edges) {
        int u, v , wt;
        wt = edge.first;
        u = edge.second.first;
        v = edge.second.second;
        if(find(u) == find(v)) continue;
        Union(u ,v);
        t_cost += wt;
        cout<< u << " " << v<< endl;
    }
    cout<<t_cost<<endl;
    return 0;
}