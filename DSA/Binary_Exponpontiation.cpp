

// power with mode
const ll M = 1000000007;
ll binaryExpoRRec(ll a, ll b)
{
    if (b == 0)
        return 1 * 1ll;
    ll res = binaryExpoRRec(a, b / 2);
    ll x = (res * res) % M;
    if (b & 1)
    {
        return (a * x) % M;
    }
    return x;
}



// power without mode
ll binaryExpoRRec(ll a, ll b)
{
    if (b == 0)
        return 1 * 1ll;
    ll res = binaryExpoRRec(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    return res * res;
}

// for  serial calculation;
ll mul(ll x, ll y)
{
    return (x * y) % M;
}
ll add(ll x, ll y)
{
    return (x + y) % M;
}
ll sub(ll x, ll y)
{
    return (x % M - y % M + M) % M;
}
ll division(ll x, ll y)
{
     return mul(x, binaryExpoRRec(y, M - 2));
}


