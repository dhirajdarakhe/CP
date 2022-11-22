/* 
   1d array

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
long long a[N];
int main()
{
    int n;
    cin >> n;
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1]; }  /// this is called prefix sum
    int l, r;
    int t;  
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        l--;r--;
        if (l == 0) cout << r;
        else cout << a[r] - a[l - 1];
    }

    return 0;
}

*/
// 2d array
// https://www.youtube.com/watch?v=nZe7P674xZo&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=20
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int ar[N][N];
long long pf[N][N];
int main()
{
    int n,i,j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> ar[i][j];
            pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    int t,a,b,c,d;cin>>t;while(t--)
    {
        cin>>a>>b>>c>>d;
        cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];

    }

    return 0;
}

// 3    
// 3 6 2
// 8 9 2
// 3 4 1
// 3    
// 1 1 2 2
// 26
// 1 2 3 3
// 24