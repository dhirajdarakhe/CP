#include <bits/stdc++.h>
using namespace std;
int upper(char c)
{
    return 'A' + (c - 'a');
}
int lower(char A)
{
    return 'a' + (A - 'A');
}

int main()
{
    // 'a' >= 97 ? cout << upper('a') : cout << "not possible";
    string s;
    int l = 0;
    int u = 0;
    // cin >> s;
    s = "lKDemVpNTalWKWddWjUtLzyncUHpineBPsOcpXRMzqdqabzSRaqWcUjVDYdfLphchomsyCmZePZwZABL";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && 'z' >= s[i])
        {
            u += upper(s[i]);
            // cout << u << endl;
        }
        else if (s[i] >= 'A' && 'Z' >= s[i])
        {
            l += lower(s[i]);
            // cout<<"l  "<<l<<endl;
        }
    }
    int prime = u - l;
    cout<<prime<<endl;
    int flag = 0;
    for (int i = 1; i * i <= prime; i++)
    {
        if (prime % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
    return 0;
}