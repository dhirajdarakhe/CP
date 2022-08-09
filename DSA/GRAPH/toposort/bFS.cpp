


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5 + 7;
vector<ll> graph[N];
vector<ll> indegree(N, 0);
ll vis[N];
queue<ll> q;

void TopoHelper() {
  ll no_ver;
  ll no_edges;
  cin >> no_edges >> no_ver;
  for (int i = 0; i < no_edges; ++i)
  {
    ll v1, v2;
    cin >> v1 >> v2;
    graph[v1].push_back(v2);
    // graph[v2].push_back(v1);  // graph is dircted uncyclic graph ;;; IMP
  }
  for (int i = 1; i <= no_ver; ++i) {
    for (auto it : graph[i]) {
      indegree[it]++;
    }
  }
  for (int i = 1; i <= no_ver; ++i) {
    if (indegree[i] == 0) {
      q.push(i);
    }
  }
  while (!q.empty()) {
    ll node = q.front();
    q.pop();
    cout << node << " ";
    for (auto it : graph[node]) {
      indegree[it]--;
      if (indegree[it] == 0) q.push(it);
    }
  }

}
int main()
{
  TopoHelper();
  return 0;
}

// 5 6
// 2 3
// 3 4
// 6 4
// 5 6
// 5 1

// 2 5 3 6 1 4
