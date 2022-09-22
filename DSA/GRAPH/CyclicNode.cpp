
const ll N = 1e5 + 10;
v64 gp[N];
ll visi[N];
bool yes;
void dfs1(ll source, ll pare, ll root)
{
    visi[source] = 1;
    for (auto x : gp[source])
    {
        if (visi[x] == 1)
        {
            if (x == root && x != pare)
            {
                yes = true;
            }
            continue;
        }
        dfs1(x, source, root);
    }
}


void solution()
{
    // ll mn = 2e18;
    // ll mx = -1*2e18;
    map<ll, ll> mp;
    ll a = 0, b = 0, m = 0, n = 0, k = 0, ans = 0;


    
    cin >> a;
    forn(i, a)
    {
        cin >> m >> n;
        gp[n].pb(m);
        gp[m].pb(n);
    }

   // which node are cyclic

    forn(i, a)
    {
        forn(j, a + 1) visi[j] = 0;
        yes = false;
        dfs1(i + 1, -1, i + 1);
        if (yes) mp[i + 1]++;
    }
 
}
