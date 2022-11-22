
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // const int n = 1e7 + 10;
// // // vector<bool> prime(n, 1);
// // // vector<int> h(n, 0), l(n , 0);
// // // void dhiraj() {
// // // 	prime[0] = prime[1] = false;
// // // 	for (int i = 2; i <= n; ++i)
// // // 	{
// // // 		if (prime[i]) {
// // // 			l[i] = h[i] = i;
// // // 			for (int j = i * 2; j <= n; j += i )
// // // 			{
// // // 				prime[j] = false;
// // // 				h[j] = i;
// // // 				if (l[j] == 0) {
// // // 					l[j] = i;
// // // 				}
// // // 			}
// // // 		}
// // // 	}
// // // 	set<int> prime_factor;
// // // 	int num = 60;
// // // 	while (num > 1)
// // // 	{	int height_prime_factor = h[num];
// // // 		while (num % height_prime_factor == 0) {
// // // 			prime_factor.insert(height_prime_factor);
// // // 			num /= height_prime_factor;
// // // 		}
// // // 	}
// // // }
// // // int main()
// // // {

// // // 	int n ;
// // // 	cin >> n;
// // // 	vector<int> ans(n + 5 , 1);
// // // 	for (int i = 1; i <= n; ++i)
// // // 	{

// // // 	}
// // // 	return 0;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // const int n = 1e7 + 10;
// // vector<bool> prime(n, 1);
// // int check_prime()
// // {
// // 	prime[0] = prime[1] = false;
// // 	for (int i = 2; i <= n; ++i)
// // 	{
// // 		if (prime[i])
// // 		{
// // 			for (int j = i * 2; j <= n; j += i)
// // 			{
// // 				prime[j] = false;
// // 			}
// // 		}
// // 	}
// // 	int n;
// // 	cin >> n;
// // 	vector<int> vi(n);
// // 	for (int i = 0; i < n; i++)
// // 	{
// // 		cin >> vi[i];
// // 	}
// // 	for (int i = 0; i < n; i++)
// // 	{
// // 		int p = vi[i];
// // 		if (prime[p])
// // 		{
// // 			cout << "NO" << endl;
// // 		}
// // 		else
// // 		{
// // 			int m = 0;
// // 			for (int j = 0; j * j <= vi[i]; j++)
// // 			{
// // 				if (vi[i] % j == 0)
// // 				{
// // 					m++;
// // 				}
// // 				if (m == 3)
// // 				{
// // 					cout << "YES" << endl;
// // 					break;
// // 				}
// // 			}
// // 			if (m != 3)
// // 			{
// // 				cout << "NO" << endl;
// // 			}
// // 		}
// // 	}

// // 	return 0;
// // }

// // int main()
// // {
// // 	check_prime();
// // 	return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t = 0;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int a, b, c;
// 		cin >> a >> b >> c;
// 		int d1, d2, d3;
// 		int a1, b1, c1;
// 		d1 = b - a;
// 		d2 = c - b;
// 		d3 = (c - a) / 2;
// 		a1 = abs(b - d2);
// 		c1 = b + d1;
// 		b1 = d3 + a;
// 		if (c1 != 0 && c1 % c == 0 && b - a == c1 - b)
// 		{
// 			cout << "YES\n";
// 			cout << a << " " << b << " " << c1 << endl;
// 		}
// 		else if (b1 != 0 && b1 % b == 0 && b1 - a == c - b1)
// 		{
// 			cout << "YES\n";
// 			cout << a << " " << b1 << " " << c << endl;
// 		}
// 		else if (a1 != 0 && a1 % a == 0 && b - a1 == c - b)
// 		{
// 			cout << "YES\n";
// 			cout << a1 << " " << b << " " << c << endl;
// 		}
// 		else
// 		{
// 			cout << "NO\n";
// 		}
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin >> n;
	cin >> s ;
	vector<int> ans(n);
	// unordered_map<char, int> freq;
	for (int i = 1; i <= n; ++i)
	{
		ans[i] = i+1;
		// freq[s[i - 1]]++;
	}
	for (int i = 0; i < s.size(); ++i)
	{	
		if (i + 1 == ans[i]) 
		{
			for (int j = i; j < s.size(); ++j)
			{
                if(s[i]==s[j]){
                	ans[j] = i;
                }
			}
		}
	}
	for(int x : ans){
		cout<<x<<" ";
	}
	// string p = "";
	// for (auto x : freq) {
	// 	if (x.second != 1) {
	// 		p += x.first;
	// 	}
	// }
	// for (int i = 0; i < p.size(); ++i)
	// {

	// 	for (int i = 0; i < s.size(); ++i)
	// 	{
	// 		if (p[i] == s[i]) {

	// 		}
	// 	}
	// }

	return 0;
}
