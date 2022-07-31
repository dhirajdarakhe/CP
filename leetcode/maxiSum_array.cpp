#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int t_sum = nums[0], c_sum = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            c_sum += nums[i];
            if (t_sum < c_sum)
            {
                t_sum = c_sum;
            }
            if (c_sum < 0)
            {
                c_sum = 0;
            }
        }
        return t_sum;
    }
};