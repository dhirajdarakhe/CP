
#include <bits/stdc++.h>
using namespace std;
bool check_prime(int n) {
	bool is_prime = true;
	if (n == 1)return 1; // 1 is not prime number
	for (int i = 2; i * i < n; ++i)
	{
		if (n % i == 0) {
			is_prime = false;
			break;
		}
	} return is_prime;
}
int main()
{
	int n;
	cin >> n;
	cout << check_prime(n) << endl;
	return 0;
}