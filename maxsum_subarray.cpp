#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int a[], int n) {
    long long ans = 0;
    long long max_so_for = -1, sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        if(sum > max_so_for){
            max_so_for = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    cout<< max_so_for << " " << sum <<endl;
    }
    return max_so_for;
}
int main()
{
    int arr[] = {1, 2, 3, -2, 5 , 4 , -45};
    cout<< maxSubarraySum(arr, 7);
    return 0;
}