

//*************************************** [   let's start the coding  ] *******************************************//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define dl double
#define pb push_back
#define fi first
#define se second
#define dbg(x) cout << #x << ' = ' << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
#define sz(x) (ll)(x).size()
#define lb lower_bound
#define ub upper_bound
#define gi greater<int>
#define mk make_pair
#define fornv(x, v)  \
    for (auto x : v) \
    cout << x << ' '
#define formp(x, v) for (auto x : v)
#define lb lower_bound
#define ub upper_bound
#define py cout << 'YES';
#define pn cout << 'NO';
bool sorta(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return (a.second < b.second);
}
bool sortd(const pair<ll, ll> &a, const pair<ll, ll> &b) { return (a.second > b.second); }
#define fast_dhiraj()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define rev reverse
const char nl = '\n';
typedef vector<ll> v64;
typedef vector<int> v32;
typedef pair<ll, ll> pll;
typedef map<ll, ll> mp;
bool isPerSquare(long double a)
{
    if (a < 0)
        return false;
    ll sr = sqrt(a);
    return (sr * sr == a);
}
// struct DisjointSet{ v64 parent; v64 size; DisjointSet(ll maxSize) { parent.resize(maxSize); size.resize(maxSize); for (ll i = 0; i < maxSize; i++) { parent[i] = i; size[i] = 1; } }
// ll find_set(ll x) { if (x == parent[x]) return x; return parent[x] = find_set(parent[x]); }
// void union_set(ll a, ll b) { a = find_set(a); b = find_set(b); if (a != b) { if (size[a] < size[b]) swap(a, b); parent[b] = a; size[a] += size[b];}}};
//  x = array of numbers
//  n = length of the array
//  k = search key,
// returns 'true' if the key is found, 'false' otherwise
// bool search(int x[], int n, int k) {  int l = 0, r = n-1;  while (l <= r) {    int m = (l+r)/2;  if (x[m] == k) return true; if (x[m] < k) l = m+1; else r = m-1;}  return false; }
void dhiraj();
// const ll M = 1e9 + 7;
// const ll MOD = 1000000007;
v64 primeFactors(ll n)
{
    v64 v;
    while (n % 2 == 0)
    {
        v.pb(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.pb(i);
            n = n / i;
        }
    }
    if (n > 2)
    {
        v.pb(n);
    }
    return v;
}
ll strint(string str)
{
    ll len = 0;
    forn(i, str.size()) { len = len * 10 + (str[i] - '0'); }
    return len;
}
// power with mode
// ll binaryExpoRRec(ll a, ll b){if (b == 0)return 1 * 1ll;ll res = binaryExpoRRec(a, b / 2); ll x  = (res * res) % M;if (b & 1){return (a * x )% M ;} return x ;}
// power without mode
// ll binaryExpoRRec(ll a, ll b) {if (b == 0) return 1 * 1ll;ll res = binaryExpoRRec(a, b / 2);if (b & 1) {return a * res * res;} return res * res;}
// vector<int> prime(10000000, 1);
// void isPrime(){int c = 0;for (int p = 2; p * p <= 10000000; p++) if (prime[p] == 1)for (int i = p * 2; i <= 10000000; i += p){prime[i] = 0;}}
#define setDecimal(num, y) cout << fixed << setprecision(y) << num
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(int a, int b) { return (a * b) / gcd(a, b); }
void prefixsum(v64 &v) { forsn(i, 1, sz(v)) v[i] += v[i - 1]; }
void postfixsum(v64 &v) { rforsn(i, sz(v) - 2, 0) v[i] += v[i + 1]; }
int main()
{
    fast_dhiraj();
    // #ifndef ONLINE_JUDGE
    // freopen('input.txt', 'r', stdin);
    // freopen('error.txt', 'w', stderr);
    // freopen('output.txt', 'w', stdout);
    // #endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        dhiraj();
        cout << '\n';
    }
    return 0;
}
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57
// string alpha = 'abcdefghijklmnopqrstuvwxyz';
// lower bound = index of first element greater/equal to x
// upper bound = index of element greater than x
// len-1-i
// ll msb = (int)(log2(i));
// uppercase = transform(s.begin(), s.end(), s.begin(), ::toupper);
// lowercase = transform(s.begin(), s.end(), s.begin(), ::tolower);
void dhiraj()
{
    // Hii Dhiraj ,
    // ll mn = 2e18;
    // ll mx = -1*2e18;
    // map<ll,ll>mp;
    // ll a = 0,b = 0,m = 0,n = 0,k = 0,ans = 0;
    // ll len = 0;cin >> len ; string s; cin >> s;
    // cin >> a;
    // v64 v(a);
    // forn(i ,a) cin >> v[i];
}