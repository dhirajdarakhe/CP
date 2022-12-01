// https://www.geeksforgeeks.org/find-length-of-longest-substring-with-at-most-k-normal-characters/


// written by 31118

// TIME CMPXTY  O (n log n)

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    string P = "normal", Q = "00000000000000000000000000";
    int K = 1;
    int N = P.length();
    map<char, ll> mp;
    for (int i = 0; i < 26; i++)
        mp['a' + i] = (Q[i] - '0');
    int ans = INT_MIN;
    int ct = 0;
    vector<int> v;
    for (auto x : P)
    {
        if (mp[x] == 0) v.push_back(1);
        else v.push_back(0);
    }
    for (int i = 1; i < v.size(); ++i)
        v[i] += v[i - 1];
    for (int i = 0; i < N; ++i)
    {
        int srch = v[i] - K;
        if (srch >= 0)
        {
            int idx = lower_bound(v.begin(), v.end(), srch) - v.begin();
            if (v[idx] == srch)
                ct = i - idx;
            else
                ct = i + 1;
            ans = max(ans, ct);
        }
    }
    cout << ans;
    return 0;
}
