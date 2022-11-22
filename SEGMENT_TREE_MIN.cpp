#include <bits/stdc++.h>
using namespace std;
#define ll long long
// built(first index of array = 0, lowest index = 0 , input taken array , segment tree array )
void built(int ind, int low, int high, int arr[], int seg[])
{
    if (low == high)
    {
        seg[ind] = arr[low];
        return;
    }
    int mid = (low + high) / 2;
    built(2 * ind + 1, low, mid, arr, seg);
    built(2 * ind + 2, mid + 1, high, arr, seg);
    seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
}
// query(first index of array = 0, lowest index = 0 , hight index = size - 1, rang [ l , r ] , segment tree array )
int query(int ind, int low, int high, int l, int r, int seg[])
{
    // no overlap
    // l r low high or low high l r;
    if (r < low || high < l)
        return INT_MAX;

    // complete ovelap
    // [l low high r]
    if (l <= low && high <= r)
        return seg[ind];

    // partial overlap
    ll mid = (low + high) / 2;
    int left = query(2 * ind + 1, low, mid, l, r, seg);
    int righ = query(2 * ind + 2, mid + 1, high, l, r, seg);
    return min(left, righ);
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
    seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int seg[4 * n]; // segement array size is always 4 * size of arrray
    built(0, 0, n - 1, arr, seg);
    // for (int i = 0; i < 4 * n - 1; ++i)
    //     cout << seg[i] << " ";
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(0, 0, n - 1, l, r, seg) << endl;
    }
}
int main()
{
    solve();
    return 0;
}