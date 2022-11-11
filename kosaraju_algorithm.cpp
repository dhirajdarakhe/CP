

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(int node, vector<ll> &visi1, vector<vector<ll>> &graph, stack<ll> &st)
{
    visi1[node] = 1;
    for (auto x : graph[node])
    {
        if (!visi1[x])
            dfs(x, visi1, graph, st);
    }
    st.push(node);
}
void rdfs(ll node, vector<ll> &arr, vector<ll> &visi2, vector<vector<ll>> &rgraph)
{
    arr.push_back(node);
    visi2[node] = 1;
    for (auto x : rgraph[node])
    {
        if (!visi2[x])
            rdfs(x, arr, visi2, rgraph);
    }
}
void kosaraju_algorithm()
{

    ll a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;
    cin >> a;   // number of nodes
    vector<vector<ll>> graph(a + 10);
    vector<vector<ll>> rgraph(a + 10);
    stack<ll> st;
    vector<ll> visi1(a + 10, 0);
    vector<ll> visi2(a + 10, 0);
    cin >> b;   // number of edges

    for (int i = 0; i < b; ++i)
    {
        cin >> m >> n;
        graph[m].push_back(n);
        rgraph[n].push_back(m);   // take traspose of the graph
    }
    for (int i = 1; i < a + 1; ++i)
        if (!visi1[i])
            dfs(i, visi1, graph, st);  // toposort  // sort the nod eof the graph

    while (!st.empty())
    {
        ll node = st.top();
        st.pop();
        if (visi2[node])
            continue;
        vector<ll> arr;
        ll ct = 0;
        ll mini = INT_MAX;
        rdfs(node, arr, visi2, rgraph); 
        for (auto x : arr)
            cout << x << " ";
    }
}
int main()
{
    kosaraju_algorithm();
    return 0;
}
