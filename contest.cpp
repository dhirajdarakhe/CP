
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;cin >> t;
    while (t--)
    {
        int n, m;cin >> n >> m;
        n += 2;m += 2;
        int arr[n][m];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                {arr[i][j] = -1;}
                else
                {arr[i][j] = 0;}
            }
        }
        int i1, j1;
        cin >> i1 >> j1;arr[i1][j1] = 1;
        cin >> i1 >> j1;arr[i1][j1] = 2;
        for (int i = 1; i < n - 1; ++i)
        {
            for (int j = 1; j < m - 1; ++j)
            {
                if (arr[i][j] == 0)
                {
                    if (arr[i - 1][j] != 1 && arr[i + 1][j] != 1 && arr[i][j - 1] != 1 && arr[i][j + 1] != 1)
                    {arr[i][j] = 1;}
                    else if (arr[i - 1][j] != 2 && arr[i + 1][j] != 2 && arr[i][j - 1] != 2 && arr[i][j + 1] != 2)
                    {arr[i][j] = 2;}
                    else
                    {    
                        int m = 0;
                        int m1 = max(arr[i - 1][j], arr[i + 1][j]);
                        m1 = max(arr[i][j - 1], m);
                        m1 = max(arr[i][j + 1], m);
                        arr[i][j] = m + 1;
                        for (m = 1; m <= m1+5; m++)
                        { if(arr[i - 1][j] != m && arr[i + 1][j] != m && arr[i][j - 1] != m && arr[i][j + 1] != m){
                                arr[i][j] = m;break;}
                        } 
                    }
                }
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}