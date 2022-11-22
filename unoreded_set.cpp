#include <bits/stdc++.h>
using namespace std;
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define ss unordered_set<string>
void print(auto &s)
{
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}
int main()
{

    // // *RULES*
    // //  no need to define the size
    unordered_set<int> s;
    s.insert(1); // // log(1)
    s.insert(3);
    s.insert(2);
    s.insert(13);
    s.insert(33);
    s.insert(23);
    s.insert(38);
    print(s);
    for (auto value : s)
    {
        cout << value << " ";
    }
    auto it1 = s.find(3); // // log(1)
    if (it1 != s.end())
    {
        cout << (*it1);
        s.erase(it1);
    }
    else
    {
        cout << "\nThere is no such element present in given unordered_set\n";
    }
    cout << endl;
    for (auto value : s)
    {
        cout << value << " ";
    }

    /*
    Q)
    You are  N string , print unique 
    strings in lexigraphical order  ( sorted order )
    8
    abc
    def
    abc
    ghj
    jkl
    ghj
    ghj
    abc
    */
    // string s;
    // ss s1;
    // w(t)
    // {
    //     cin >> s;
    //     s1.insert(s);
    // }
    // print(s1);

    return 0;
}