
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5 + 7;
vector<ll> graph[N];
bool visi[N];
ll level[N] = {0};
void BFS(ll start)
{   queue<ll> q;
    q.push(start);
    visi[start] = true;
    while (!q.empty()) {
        ll cur_v = q.front();
        cout << cur_v << " ";
        q.pop();
        for (auto child : graph[cur_v]) {
            if (visi[child] == false) {
                q.push(child);
                visi[child] = true;
                level[child] = level[cur_v] + 1;
            }
        }
    }
}

int main()
{
    ll e, v;
    cout << "\nEnter Edges : ";
    cin >> e;
    for (int i = 0; i < e; ++i)
    {
        ll v1, v2;
        cout << "\nv1 : "; cin >> v1;
        cout << "\nv2 : "; cin >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    
    BFS(1);
    cout<<endl;
    cout<<"\nLevel of each node : ";
    cout<<"\nOr :";
    cout<<"\nShorted distance between source node and any node : ";
    cout<<"\n";
    for (int i = 0; i < 5; ++i)
    {
        cout<<i+1<< " ) "<<level[i+1]<<endl;
    }
    return 0;
}