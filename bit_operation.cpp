#include <bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
int main()
{
    // 1)  check weather (1) ith bit is set or not
    int a = 5; // 101
    if ((a & (1 << 1)) != 0)
    {
        cout << (a & (1 << 2))<< "set bit \n";
    }
    else
    {
        cout << " unset bit \n";
    }

    // 2)
    // int a = 6;
    // printBinary((1 << 6) - 1); // 00000111111
    // cout << __builtin_popcount((1 << 6) - 1)<< endl;  //6
    // to check set bit
    // to get n set bit binary number

    //  3 )
    // make ith bit set bit in binary number
    // int a = 5; // 101
    // printBinary(a | (1<<1)); // 111
    // printBinary(a | (1<<0));

    // 4 )
    // make ith bit unset bit in binary number
    // int a = 5; // 101
    // printBinary(a & ~(1<<0)); // 100

    // 5 )
    // toggel
    // int a = 5 ; // 101
    int a;cin>>a;
    printBinary(a ^ (1<<2)); // 001

    // 6 )
    // print 6 set bit int number
    // printBinary((1 << 11) - 1);
    return 0;
}