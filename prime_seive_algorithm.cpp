
#include <bits/stdc++.h>
using namespace std;
const int n = 1e7 + 10;
vector<bool> prime(n, 1);
int main()
{
	prime[0] = prime[1] = false;
	for (int i = 2; i <= n; ++i)
	{
		if (prime[i])
		{
			for (int j = i * 2; j <= n; j += i)
			{
				prime[j] = false;
			}
		}
	}
	for (int i = 0; i < 100; ++i)
	{

		cout << i << " " << prime[i] << endl;
	}
	cout<<prime[4]<<endl;
	return 0;
}