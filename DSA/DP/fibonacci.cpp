#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> dp(N, -1);
// brute force method to find the ith fibonacci number
// .. time compxty o(2^n);
int fibo(int n)
{
    if (n == 0) 
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

// using DP to find the ith fibonacci number
// .. time compxty o(n);
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (dp[n] != -1) // memoise
        return dp[n];
    return dp[n] = fibo(n - 1) + fibo(n - 2);
}
int main()
{

    return 0;
}
