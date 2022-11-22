#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define ll long long
typedef vector<ll> v64;

/// pop_back -> remove the last element
using namespace std;
int main()
{

    //******VECTOR
    vi v;
    v.pb(23);
    v.pb(123);
    v.pb(223);
    v.pb(233);
    v.pb(243);
    for (int i = 0; i < 5; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    vi ::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    for (auto value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    vector<pair<int, int>> v1 = {{1, 2}, {3, 4}};

    /// input
    for (int i = 0; i < v1.size(); i++)
    {
        int x, y;
        cin >> x >> y;
        v1.push_back({x, y});
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i].first << " " << v1[i].second << endl;
    }

    ////  Range base iteration
    for (pair<int, int> value : v1)
    {
        cout << value.first << " " << value.second;
    }
    /// auto is dynamic data type which automatically determine the data type of the value while storing

    cout << endl;
    // // vi ::iterator it;
    /// iteration using auto keyword
    for (auto it1 = v.begin(); it1 != v.end(); it1++)
    {
        cout << (*it1) << " ";
    }
    cout << endl;
    //// iteration using auto and Range base keyword
    for (auto value : v)
    {
        cout << value << " ";
    }
    //// In upper for loop only copy of element is printing

    /// vector of vector

    vector<int> v12[10];

    /// find function
    v64 a = {1, 5, 3, 6, 7};
    ll x = 3;
    ll p = find(a.begin(), a.end(), x) - a.begin(); // it returns the int value because int = iterator - iterator
    ll p1 = find(a.begin(), a.end(), x);            // it returns the iterator value because iterator = iterator
    cout << p << " " << p1 - a.begin();             // correct way to print output
    cout << p << " " << p1;                         // wrong

    /// Rotate function
    ll p = 3;
    rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
    // rotate function takes three prameter
    // 1> index : index of first elemnt of the subvector which to be rotated
    // 2> index : index of last elemnt of the subvector which to be rotated
    // 3> index : where the rotated subvector to be placed 

    return 0;
}