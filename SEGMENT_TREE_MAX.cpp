
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// built(first index of array = 0, lowest index = 0 , input taken array , segment tree array )
void built(ll ind, ll low, ll high, ll arr[], ll seg[])
{
    if (low == high)
    {
        seg[ind] = arr[low];
        return;
    }
    ll mid = (low + high) / 2;
    built(2 * ind + 1, low, mid, arr, seg);
    built(2 * ind + 2, mid + 1, high, arr, seg);
    seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);
}
// query(first index of array = 0, lowest index = 0 , hight index = size - 1, rang [ l , r ] , segment tree array )
ll query(ll ind, ll low, ll high, ll l, ll r, ll seg[])
{
    // no overlap
    // l r low high or low high l r;
    if (r < low || high < l)
        return INT_MIN;

    // complete ovelap
    // [l low high r]
    if (l <= low && high <= r)
        return seg[ind];

    // partial overlap
    ll mid = (low + high) / 2;
    ll left = query(2 * ind + 1, low, mid, l, r, seg);
    ll righ = query(2 * ind + 2, mid + 1, high, l, r, seg);
    return max(left, righ);
}
// update(first index of array = 0, lowest index = 0 , hight index = size - 1, index to be changed , value to be added , segment tree array )
void update(ll ind, ll low, ll high, ll i, ll val, ll seg[]) {
    if (low == high) {
        seg[ind] = val;
        return;
    }
    ll mid = (low + high) / 2;
    if (i <= mid )  update(2 * ind + 1 , low, mid, i, val, seg);
    else update(2 * ind + 2 , mid + 1 , high, i , val, seg);
    seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);
}
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; ++i)
        cin >> arr[i];
    ll seg[4 * n];
    built(0, 0, n - 1, arr, seg);
    // for (int i = 0; i < 4 * n - 1; ++i)
    //     cout << seg[i] << " ";
    ll q;
    cin >> q;
    while (q--)
    {   ll type;
        cin >> type;
        if (type == 1) {

            // finding  min element in l & r range array
            ll l, r;
            cin >> l >> r;
            cout << query(0, 0, n - 1, l, r, seg) << endl;
        } else {

            // make changes in array element in array at perticular index
            ll i , val;
            cin >> i >> val;
            update(0, 0, n - 1, i, val, seg);
            arr[i] = val;
        }
    }
}
int main()
{
    solve();
    return 0;
}