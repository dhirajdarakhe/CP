// /// we know that integer can store the 32 bit data ;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << INT_MAX << endl;
    // int a = (1 << 32) - 1; /// it is wrong because  (1 <<32) calulation well be done in int but initially value of  (1 <<32)  is 33 bit such but cannot store in int
    // int a = (1ll << 32) - 1;  /// now calulation will be in long long so expression can have 33 bit then from 33 bit 1 will get sunstracted the it is going to store in int
    /// but still it is wrong , 31 th bit integer is reserved for sign so actual value of data should be 31 bit defalut value of that reserved bit is 0 ( + ) ;
    int a = (1ll << 31) - 1;
    cout << a << endl;
    unsigned int a1 = (1ll << 32) - 1;
    cout << a1 << endl;
    return 0;
}
