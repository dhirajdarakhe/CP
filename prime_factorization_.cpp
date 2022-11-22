#include <bits/stdc++.h>
using namespace std;
const int n = 1e7 + 10;
vector<bool> prime(n, 1);
vector<int> h(n, 0), l(n , 0);
int main()
{
	prime[0] = prime[1] = false;
	for (int i = 2; i <= n; ++i)
	{
		if (prime[i]) {
			l[i] = h[i] = i;
			for (int j = i * 2; j <= n; j += i )
			{
				prime[j] = false;
				h[j] = i;
				if (l[j] == 0) {
					l[j] = i;
				}
			}
		}
	}
	for (int i = 0; i <= 30; ++i)
	{	cout << "*****\n";
		cout << i << " " << prime[i] << endl;  /// check it is prime or not
		cout << l[i] << " " << h[i] << endl;  /// lowet and height prime factor
		cout << "*****\n";
	}
	//  find prime factorization
	map<int, int> prime_factor;
	int num = 30;
	while (num > 1)
	{	int height_prime_factor = h[num];
		while (num % height_prime_factor == 0) {
			prime_factor[height_prime_factor]++;
			num /= height_prime_factor;
		}
	}
	for (auto x : prime_factor) {
		cout << x.first << " " << x.second << endl;
	}

	return 0;
}