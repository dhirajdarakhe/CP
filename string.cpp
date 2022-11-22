#include <bits/stdc++.h>
using namespace std;
int main()
{
    //*1
    // string s;
    // getline(cin, s);
    // // // it is used if input string has space
    // cout << s;

    //*2
    // // https://www.youtube.com/watch?v=abZEVCRYZP8&list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&index=7
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     getline(cin, s);
    //     cout << s << endl;
    // }
    
    // int t;
    // cin >> t;
    // cin.ignore();
    // while (t--)
    // {
    //     getline(cin, s);
    //     cout << s << endl;
    // }

    // // if t =3;
    // then each while should run three time but,
    // actually it is not seen in case of first while
    // loop it while run for two time only
    // when we take the input it will store in t but spaces after t will
    // be considred as first string
    // thats why we have to write cin.ingnor to ignor the letter string

    // *3
    // cin >> s;
    // string st = "";
    // for (int i = s.size() - 1; i >= 0; i--)
    // {
    //     // st += s[i];  dont't do this , it has high time complexity which depend on size of the string
    //     st.push_back(s[i]); O(1);
    // }
    // cout << st;

    // *4
    string num = "12335465352545541526414";
    int last_digit = num[num.size() - 1] - '0';
    cout << last_digit;

    return 0;
}