#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int hsh[N][30];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < N; j++)
            {
                hsh[j][i] = 0;
            }
        }
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            hsh[i + 1][s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                hsh[j][i] += hsh[j - 1][i];
            }
        }
        int isOdd = 0;
        while (q--)
        {
            int r, l;
            cin >> l >> r;
            int ans;
            for (int i = 0; i < 26; i++)
            {
                ans = hsh[r][i] - hsh[l - 1][i];
                if (ans % 2 == 1)
                {
                    isOdd++;
                }
            }
            if (isOdd > 1)
            {
                cout << isOdd << "no";
            }
            else
            {
                cout << "yes";
            }
        }
    }
    return 0;
}