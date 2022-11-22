//https://www.youtube.com/watch?v=7mx2BasNK0w&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=35

#include <bits/stdc++.h>
using namespace std;
#define msi map<string, int>
int main()
{

    // //  *****  MAP  ******
    // // map store the element in sorted order
    // // to insert and retrive time complexity is O(logn)
    // // no need to define the size of map while declearation
    // // if don't give the value then it store the 0(int) or " "(string)
    // // keys are unique
    // // cannot insert two same key
    // map<int, string> m;
    // m[0] = "abcd0";
    // m[1] = "abcd1";
    // m[4] = "abcd0";
    // m[2] = "abcd2";
    // m.insert({3, "abcd3"});
    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it).first << (*it).second << " ";
    // }
    // cout << endl;
    // for (auto value : m)
    // {
    //     cout << value.first << value.second << " ";
    // }
    // cout << endl;
    // auto autoit = m.find(3); // return iterator if not fount return end pointer
    // // // O(logn)
    // if (autoit == m.end())
    // {
    //     cout << " NO VALUE";
    // }
    // else
    // {
    //     cout << (*autoit).first << " " << (*autoit).second;
    // }

    // cout << endl;
    /*
    Q)
    You are  N string , print unique 
    strings in lexigraphical order  ( sorted order )
    with their freqeuncy
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
    msi ms;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ms[s]++;
    }
    for(auto pr : ms)
    {
        cout<<pr.first << " " <<pr.second << endl;
    }
    return 0;
}