#include <bits/stdc++.h>
using namespace std;
#define ll long long
int print(int n)
{
    if (n < 1) return 0;
    return n + print(n-1);
}
int main()
{
    int ans = 0;
    cout << print(10);
    return 0;
}