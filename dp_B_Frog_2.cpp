//  https://atcoder.jp/contests/dp/tasks/dp_a

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin(), (x).end()
typedef vector<ll> v64;
typedef vector<int> v32;
const ll N = 1e5 + 7;
ll n;
v64 dp(N, -1);
ll h[N];
ll frog2(ll i, ll k)
{   
    // if (k >= n) return 0;
    if (dp[i] != -1) // dp implementation
        return dp[i];
    if (i == 0) // braking condition ;
        return 0;
    ll cost = INT_MAX;
    // way 1;
    // cost = min(cost, (frog2(i - 1, k) + abs(h[i] - h[i - 1])));
    // ll k1 = k;
    for (int j = 1; j <= k; ++j)
     { 
        if (i - j >= 0) cost = min(cost, (frog2(i - j, k) + abs(h[i] - h[i - j])));
        // k1--;
    }
    // way 2;
    // cost = min(cost, (frog2(i - 2, k) + abs(h[i] - h[i - 2])));
    return dp[i] = cost;
}
int main()
{
    ll k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    ll ans = frog2(n - 1, k);
    cout << ans;

    return 0;
}