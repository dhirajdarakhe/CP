

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5 + 7;
vector<pair<ll, ll>> graph[N];

void DIJKSTRA(ll start, ll n)
{
  priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq; // syntax of pq to acesnding order pair 
  vector<ll> dis(n + 1, INT_MAX);
  dis[start] = 0;
  pq.push({0, start});
  while (!pq.empty())
  {
    ll dist = pq.top().first;
    ll node = pq.top().second;
    pq.pop();
    for (auto childwt : graph[node])
    {
      ll wt = childwt.second;
      ll child = childwt.first;
      if (wt + dist < dis[child])
      {
        dis[child] = wt + dist;
        pq.push({wt + dist, child});
      }
    }
  }
  for (int i = 0 ; i < n; ++i) {
    cout << dis[i] << " ";
  }
}

int main()
{
  ll n, e;
  cin >> n >> e; // size of the graph and endges in the graph;;
  for (ll i = 0; i < e; ++i)
  {
    int v1, v2, wt;
    cin >> v1 >> v2 >> wt;
    graph[v1].push_back({v2, wt});
    graph[v2].push_back({v1, wt});
  }
  ll perticular_node = 0; // the node from which distance to be calculated for other node
  DIJKSTRA(perticular_node, n);

  return 0;
}


// 9 13
// 0 1 0
// 0 7 1
// 1 7 1
// 1 2 1
// 2 3 0
// 2 5 0
// 2 8 1
// 3 4 1
// 3 5 1
// 4 5 1
// 5 6 1
// 6 7 1
// 7 8 1

//  0 0 1 1 2 1 2 1 2
