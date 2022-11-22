#include <bits/stdc++.h>
using namespace std;
int main()
{

    //// *****  in array and in vector
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 5); /// must
    cout << " **********\n";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << " **********\n";
    int *ptr = upper_bound(a, a + 5, 8);
    // if (ptr == (a + 5))
    // {
    //     cout << "not found";
    // }
    // cout << *ptr << endl;

    // int *ptr = lower_bound(a, a + 5, 4);
    // if (ptr == (a + 5))
    // {
    //     cout << "not found";
    // }
    // cout << *ptr << endl;

    // // // **** set
    int n;
    cin >> n;
    set<int> s1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }
    // no need of sort
    // cout << endl;
    for (auto x : s1)
    {
        cout << x << " ";
    }
    cout << endl;
    // auto it = lower_bound(s1.begin(), s1.end(), 44); /// don;t use this syntax in case of set and map
    auto it = s1.lower_bound(44);
    if (it == s1.end())
    {
        cout << " element not found " << endl;
    }
    else
    {
        cout << (*it);
    }

    return 0;
}