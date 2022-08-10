// https://cp-algorithms.com/graph/01_bfs.html#algorithm

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5 + 7;
vector<pair<ll, ll>> graph[N];
ll vis[N];

// use 01bfs if there should be only two different wt in the graph
// and one of the them must be zero
// can be implemented by using Queue as well but it takes more time give distance array
// gives the shortest path from the perticular node to other node

void zero_one_BFS(ll start, ll n)
{
  deque<pair<ll, ll>> dq;
  vector<ll> dis(n + 1, INT_MAX);
  dis[start] = 0;
  dq.push_back({start, 0});
  while (!dq.empty())
  {
    ll node = dq.front().first;
    ll dist = dq.front().second;
    dq.pop_front();
    for (auto childwt : graph[node])
    {
      ll child = childwt.first;
      ll wt = childwt.second;
      if (wt + dist < dis[child])
      {
        dis[child] = wt + dist;
        if (wt == 0)
        {
          dq.push_front({child, wt + dist});
        }
        else
        {
          dq.push_back({child, wt + dist});
        }
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
  zero_one_BFS(perticular_node, n);

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
