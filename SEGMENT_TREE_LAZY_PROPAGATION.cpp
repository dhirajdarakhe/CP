
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class ST
{

    vector<ll> st, lazy;

public:
    ST(ll n)
    {
        st.resize(4*n+1);
        lazy.resize(4*n+1);
    }
    void build(ll ind, ll low, ll high, ll arr[])
    {
        // base condition
        if (low == high)
        {
            st[ind] = arr[low];
            return;
        }
        ll mid = (low + high) / 2;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1, high, arr);
        st[ind] = st[2 * ind + 1] + st[2 * ind + 2];
    }
    void update(ll ind, ll low, ll high, ll l, ll r, ll val)
    {

        // 1   firstly we will check is there any update remaining;
        // if there ;
        // then update the previous remaining updates
        // and propagate dounwords;
        if (lazy[ind] != 0)
        {
            st[ind] += (high - low + 1) * lazy[ind];
            // once it is updated
            // then propagate downword
            if (low != high)
            {
                lazy[2 * ind + 1] += lazy[ind];
                lazy[2 * ind + 2] += lazy[ind];
            }
            lazy[ind] = 0;
        }

        // 2   no overlap
        // we don't do any thing
        // low high l r or l r low high
        if (high < l || r < low)
            return;

        // 3   complete overlap;
        // l low high r
        if (l <= low && high <= r)
        {
            st[ind] += (high - low + 1) * val;
            // if it have children
            if (low != high)
            {
                lazy[2 * ind + 1] += val;
                lazy[2 * ind + 2] += val;
            }
            return;
        }

        // 4   partial overlap
        ll mid = (low + high) / 2;
        update(2 * ind + 1, low, mid, l, r, val);
        update(2 * ind + 2, mid + 1, high, l, r, val);
        st[ind] = st[2 * ind + 1] + st[2 * ind + 2];
    }
    ll query(ll ind, ll low, ll high, ll l, ll r)
    {

        // 1   firstly we will check is there any update remaining;
        // if there ;
        // then update the previous remaining updates
        // and propagate dounwords;
        if (lazy[ind] != 0)
        {
            st[ind] += (high - low + 1) * lazy[ind];
            // once it is updated
            // then propagate downword
            if (low != high)
            {
                lazy[2 * ind + 1] += lazy[ind];
                lazy[2 * ind + 2] += lazy[ind];
            }
            lazy[ind] = 0;
        }

        // 2   no overlap
        // we don't do any thing
        // low high l r or l r low high
        if (high < l || r < low)
            return 0;

        // 3   complete overlap;
        // l low high r
        if (l <= low && high <= r)
            return st[ind];

        // 4   partial overlap
        ll mid = (low + high) / 2;
        ll left = query(2 * ind + 1, low, mid, l, r);
        ll right = query(2 * ind + 2, mid + 1, high, l, r);
        return left + right;
    }
};
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; ++i)
        cin >> arr[i];
    ST st(n);
    st.build(0, 0, n - 1, arr);
    ll q;
    cin >> q;
    while (q--)
    {
        ll type;
        cin >> type;
        if (type == 1)
        {
            ll l, r;
            cin >> l >> r;
            ll ans = st.query(0, 0, n - 1, l, r);
            cout << ans << "\n";
        }
        else
        {
            ll l, r, val;
            cin >> l >> r >> val;
            st.update(0, 0, n - 1, l, r, val);
        }
    }
    return 0;
}


// 5
// 1 2 3 4 5
// 3
// 1
// 0 4
// 2
// 1 3 2
// 1
// 0 4

// 15
// 21