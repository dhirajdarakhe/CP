    
    v64 v;
    ll n0 = 0, n1 = 0;
    forn(i, len)
    {
        if (s[i] == '0')
        {
            n0++;
            if (n1)  v.pb(n1);
            if (n1)  n1 = 0;
        }
        else if (s[i] == '1')
        {
            n1++;
            if (n0) v.pb(n0);
            if (n0)  n0 = 0;
        }
    }
    if (n1)  v.pb(n1);
    if (n0) v.pb(n0);

                =========================================================================================================================================================

    woooooow < input
    w 1      < output
    o 6
    w 1   
                    
    string s;
    cin >> s;
    vector<pair<char, ll>> v;
    forn(i, sz(s) - 1)
    {
        if (s[i] != s[i + 1])
        {
            v.pb({s[i], ans});
            ans = 0;
        }
        ans++;
    }
    if (s[sz(s) - 1] == s[sz(s) - 2])
    {
        v.pb({s[sz(s) - 1], ans});
    }
    else
    {
        v.pb({s[sz(s) - 1], 1});
    }
    for (auto x : v)
    {
        cout << x.fi << " " << x.se << nl;
    }







         =========================================================================================================================================================


