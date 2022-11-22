#include <bits/stdc++.h>
using namespace std;
vector<int> prime(10000000, 1);
void isPrime()
{

    int c = 0;
    for (int p = 2; p * p <= 10000000; p++)

        if (prime[p] == 1)

            for (int i = p * 2; i <= 10000000; i += p)
            {
                prime[i] = 0;
            }
}
int main()
{
  return 0;
}