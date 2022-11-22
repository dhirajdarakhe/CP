
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	int ct = 0;
	for (int i = 1; i * i <= n; ++i)
	{
		if (n % i  == 0) {
			cout << i <<endl;
			ct++;
			if (i != n / i) {
				cout << n / i << endl;
				ct++;
			}
		}
	}
	cout<<endl<<ct<<endl;
	return 0;
}
