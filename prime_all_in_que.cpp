// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/hacker-with-prime-bebe28ac/
#include <bits/stdc++.h>
using namespace std;
#define ll int
const ll N = 1e6 + 10;
ll hp[N];
ll hsh[N];
ll canRemove[N];

vector<ll> prime_factor(ll x)
{
    vector<ll> ans;
 
    while (x > 1)
    {   ll hight_prime_factor = hp[x];
        while (x % hight_prime_factor == 0)
        {
            x /= hight_prime_factor;
        }
        ans.push_back(hight_prime_factor);
    }
    return ans;
}
int main()
{

    // HIGHT PRIME FACTOR
    for (ll i = 2; i < N; i++)
    {
        if (hp[i] == 0)
        {
            for (ll j = i; j < N; j += i)
            {
                hp[j] = i;
            }
        }
    }

    ll n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        hsh[i] = 1;
    }
    for (ll i = 0; i < n; i++)
    {
        // if (hsh[i] == 0)
        // {
            for (long long j = a[i]; j < N; j *= a[i])
            {
                canRemove[j] = 1;
            }
        // }
    }

    while (q--)
    {
        ll x;
        cin >> x;
        vector<ll> pf = prime_factor(x);
        bool isPossible = false;
        for (ll i = 0; i < pf.size(); i++)
        {
            for (ll j = i; j < pf.size(); j++)
            {
                ll product = pf[i] * pf[j];
                if (i == j && x % product != 0)
                    continue;
                ll toRemove = x / product;
                if (canRemove[toRemove] == 1 || toRemove == 1)
                {
                    isPossible = true;
                    break;
                }
            }
            if (isPossible)
            {
                break;
            }
        }
        cout << (isPossible ? "YES\n" : "NO\n");
    }

    return 0;
}
