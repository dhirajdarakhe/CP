
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> g[N];
int depth[N], height[N];
void dfs(int vertex, int par = 0)
{
    for (int child : g[vertex])
    {
        if (child == par)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max(height[vertex], height[child] + 1);
    }
}

int main()
{
    int v;
    cin >> v;
    for (int i = 0; i < v - 1; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
    for (int i = 1; i <= v; ++i)
    {
        cout << i << " " << depth[i] << " " << height[i] << endl;
    }
    return 0;
}
// input
// 13
// 1 2
// 1 3
// 1 13
// 2 5
// 5 6
// 5 7
// 5 8
// 8 12
// 3 4
// 4 9
// 4 10
// 10 11


// height
// 1 0 4
// 2 1 3
// 3 1 3
// 4 2 2
// 5 2 2
// 6 3 0
// 7 3 0
// 8 3 1
// 9 3 0
// 10 3 1
// 11 4 0
// 12 4 0
// 13 1 0
