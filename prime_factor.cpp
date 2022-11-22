
#include <bits/stdc++.h>
using namespace std;
void prime_factor_func(int n)
{   
    /// cxty= sqrt(n);
    set<int> prime_factor;
    for (int i = 2; i * i <= n; ++i)
    {                                                                               //  2    3          // 07   and 13 hasn't have any divisor present below sqrt(13)  if ithas then it would have become 1 , else if hould be greater then 1, we need to consider that number that why we added last  
        while (n % i == 0)  /// first or smallest divisor of any number is prime always 36-18-9-3-1     // 91-07-13
        {
            prime_factor.insert(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        prime_factor.insert(n);
    }
    for (int i : prime_factor)
    {
        cout << i << endl;
    }
}
int main()
{

    int n;
    cin >> n;
    prime_factor_func(n);
    return 0;
}