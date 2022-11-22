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
v64 dp(N, -1);
ll h[N];
ll frog1(ll i)
{
    if (dp[i] != -1) // dp implementation
        return dp[i];
    if (i <= 0) // braking condition ;
        return 0;
    ll cost = INT_MAX;
    // way 1;
    cost = min(cost, (frog1(i - 1) + abs(h[i] - h[i - 1])));
    // way 2;
    if (i > 1)
        cost = min(cost, (frog1(i - 2) + abs(h[i] - h[i - 2])));
    return dp[i] = cost;
}
int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    ll ans = frog1(n - 1);
    cout << ans;

    return 0;
}