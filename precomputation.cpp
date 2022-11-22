#include <bits/stdc++.h>
using namespace std;
/*find factorial with modulo M
where  10 = 10^9+7
constraints:
1<= T <= 10^5
1 <= n <= 10^5
*/

/*

1) // O(T*N) = 10^10 <- TLE
const int M = 1e9 + 7;
int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = (fact * i) % M;
        }
        cout << fact << endl;
    }
    return 0;
}

*/

/*
2) // O(T) + (N)

const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long int fact[N];
int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 0; i < N; i++)
    {
        fact[i] = (fact[i-1] * i) % M;
    }
    int n, t;
    cin >> t;
    while (t--)
    {
        cout << fact[n] << endl;
    }
    return 0;
}
*/