#include <bits/stdc++.h>
using namespace std;
int main()
{

    // // to insert and retrive time complexity is O(1)
    // // beacause no comparision is done in insertion operation
    // // hash table is used for insertion
    // // 
//    unordered_map<int, string> m;
//     m[0] = "abcd0";
//     m[1] = "abcd1";
//     m[4] = "abcd0";
//     m[2] = "abcd2";
//     m.insert({3, "abcd3"});
//     unordered_map<int, string>::iterator it;
//     for (it = m.begin(); it != m.end(); it++)
//     {
//         cout << (*it).first << " | " << (*it).second << endl;
//     }
//     cout << endl;
//     for (auto value : m)
//     {
//         cout << value.first << " | " << value.second << endl;
//     }
  /*
    Q)
    You are  N string , print unique 
    strings  with their freqeuncy
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
    unordered_map<string, int> ums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ums[s]++;
    }
    for(auto pr : ums)
    {
        cout<<pr.first << " " <<pr.second << endl;
    }
    // // here we can use map as well
    // // if we go with map then time complexity of ans would be O(lon n)
    // // and in this code the time complexity is O(1)
  return 0;
}