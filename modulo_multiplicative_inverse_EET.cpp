#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int d, z, y;
void extendedEuclid(ll int c, ll int m)
{
	if (m == 0)
	{
		d = c;
		z = 1;
		y = 0;
	}
	else
	{
		extendedEuclid(m, c % m);
		ll int temp = z;
		z = y;
		y = temp - (c / m) * y;
	}
}
ll int modInverse(int c, int M)
{
	extendedEuclid(c, M);
	return (z % M + M) % M;
}
int main()
{
  return 0;
}