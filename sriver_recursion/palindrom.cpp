#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool pali(string &s, int i = 0)
{
    if (s.size() - i - 1 <= i)
        return true;
    else if (s[i] != s[s.size() - i - 1])
        return false;
    return pali(s, i + 1);
}
int main()
{
    string x = "dhir0rihdm";
    cout << pali(x);
    return 0;
}