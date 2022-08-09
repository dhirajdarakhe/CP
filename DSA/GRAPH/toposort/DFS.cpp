


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5 + 7;
vector<ll> graph[N];
ll vis[N];
stack<ll> st;
void TopoSort(ll start) {
  vis[start] = 1;
  for (auto child : graph[start]) {
    if (vis[child] == 1) continue;
    TopoSort(child);
  }
  st.push(start);
}
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
  for (int i = 1; i <= no_ver; ++i)
  {
    if (!vis[i]) {
      TopoSort(i);
    }
  }
  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
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

// 5 6 2 3 4 1
