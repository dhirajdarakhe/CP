    
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
