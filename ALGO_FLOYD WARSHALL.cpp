
#include <bits/stdc++.h>
using namespace std;
const int N = 510;
const int INF = 1e9 + 7;
int dis[N][N];
int main()
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i == j) dis[i][j] = 0;
            else dis[i][j] = INF;
        }
    }
    int v,e;
    cin >> v >> e;
    for (int i = 0; i < e; ++i)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        dis[v1][v2] = wt;
    }
    for (int k = 1; k <= v; ++k)
    {
        for (int i = 1; i <= v; ++i)
        {
            for (int j = 1; j <= v; ++j)
            {
                dis[i][j] = min(dis[i][j] , dis[i][k] + dis[k][j]);
            }
        }
    }

    for (int i = 1; i <= v; ++i)
    {
        for (int j = 1; j <= v; ++j)
        {
            if (dis[i][j] != INF) cout << dis[i][j] << " ";
            else cout<<"I ";
        } cout << endl;
    }

// 6 9
// 1 2 1
// 1 3 5
// 2 3 2
// 3 5 2
// 2 5 1
// 2 4 2
// 4 5 3
// 4 6 1
// 5 6 2

// 0 1 3 3 2 4 
// I 0 2 2 1 3 
// I I 0 I 2 4 
// I I I 0 3 1 
// I I I I 0 2 
// I I I I I 0
    return 0;
}