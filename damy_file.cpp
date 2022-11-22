// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3 + 10;
// vector<int>graph[N];
// bool vis[N];
// bool DFS(int vertex, int parent) {
// 	vis[vertex] = true;
// 	bool is_cycle_exit = false;
// 	for (int child : graph[vertex])
// 	{   
// 		if(vis[child] && child == parent) continue;
// 		if (vis[child]) return true;
// 		is_cycle_exit |= DFS(child, vertex);
// 	}
// 	return is_cycle_exit;
// }
// int main()
// {
// 	int v, e; cin >> v >> e;
// 	for (int i = 0; i < e; ++i)
// 	{	int v1, v2; cin >> v1 >> v2;
// 		graph[v1].push_back(v2);
// 		graph[v2].push_back(v1);
// 	}
// 	bool is_loop_Exist = false;
// 	for (int i = 1; i <= v; ++ i)
// 	{
// 		if (vis[i]) continue;
// 		if(DFS(i, 0)){
// 			is_loop_Exist = true;
// 			break;
// 		}
// 	}
// 	cout<<is_loop_Exist<<endl;
// 	cout<< (is_loop_Exist ? "YES\n" : "NO\n");
// 	return 0;
// }






#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve();
ll binaryExpoRRec(ll a, ll b) {
    if (b == 0)return 1;
    long res = binaryExpoRRec(a, b / 2);
    if (b & 1) {
        return a * res * res;
    } return res * res;
}
int main()
{
// ios_base::sync_with_stdio(false);cin.tie(NULL);

// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("error.txt", "w", stderr);
// freopen("output.txt", "w", stdout);
// #endif

    int t = 1;
    /*is Single Test case?*/cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0;
}
void solve()
{
    string s;
    cin >> s;
    string a;
    cin >> a;
    map<char, int> m1;
    map<char , int>m2; int f = 0;
    for (int i = 0; i < s.size(); ++i) m1[s[i]]++;
    for (int i = 0; i < a.size(); ++i) {
        m2[a[i]]++;
        if (a[i] == 'a') {
            f = 1;
        }
    }
    if (f == 0) {
        cout << 1ll * pow(2, s.size());
        return;
    }
    if (s.size() == 1) {
        if (a.size() == 1) {
            cout << 1;
            // if (a[0] == 'a') {
            //     cout << 1;
            //     return;
            // } else {
            //     cout << 2;
            // }
        } else {
            cout << -1;
        }
    } else {
        if (m2.size() == 1) {
            if (a.size() == 1) {
                cout << 1;
            } else {
                cout << -1;
            }
        } else {
            cout << -1;
        }
    }

}





















// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	int n, m;
// // 	cin >> n >> m;
// // 	n += 2;
// // 	m += 2;
// // 	int arr[n][m];
// // 	for (int i = 0; i < n; ++i)
// // 	{	for (int j = 0; j < m; ++j)
// // 		{
// // 			if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
// // 				arr[i][j] = -1;
// // 			} else {
// // 				arr[i][j] =  0;
// // 			}
// // 		}
// // 	}
// // 	int i1, j1;
// // 	cin >> i1 >> j1;
// // 	arr[i1][j1] = 1;
// // 	cin >> i1 >> j1;
// // 	arr[i1][j1] = 2;
// // 	for (int i = 1; i < n - 1; ++i)
// // 	{	for (int j = 1; j < m - 1; ++j)
// // 		{
// // 			if (arr[i][j] == 0) {
// // 				if (arr[i - 1][j] != 1 && arr[i + 1][j] != 1 && arr[i][j - 1] != 1 && arr[i][j + 1] != 1) {
// // 					arr[i][j] == 1;
// // 				}
// // 				else if (arr[i - 1][j] != 2 && arr[i + 1][j] != 2 && arr[i][j - 1] != 2 && arr[i][j + 1] != 2) {
// // 					arr[i][j] = 2;
// // 				} else {
// // 					// cout<<"Dhiral";
// // 					int m = max(arr[i - 1][j], arr[i + 1][j] );
// // 					m =  max(arr[i][j - 1], m );
// // 					m = max(arr[i][j + 1], m);
// // 					arr[i][j] = m + 1;
// // 					cout << i << " " << j << endl;
// // 				}
// // 			}
// // 			else {
// // 				arr[i][j] = 90;
// // 			}
// // 			cout <<	arr[i][j] << " ";

// // 		}
// // 		cout << endl;
// // 	}
// // 	// for (int i = 0; i < n ; ++i)
// // 	// 	{	for (int j = 0; j < m ; ++j)
// // 	// 		{
// // 	// 			// if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
// // 	// 			// 	arr[i][j] = -1;
// // 	// 			// } else {
// // 	// 			cout<<	arr[i][j] <<" ";
// // 	// 			// }
// // 	// 		}
// // 	// 		cout<<endl;
// // 	// 	}
// // 	return 0;
// // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // const int N = 1e3 + 10;
// // vector<int> graph[N];
// // bool vis[N];
// // void dfs( int vertex) {
// // 	// take action on vertex
// // 	// after entering the vertex
// // 	cout << vertex << endl;
// // 	vis[vertex] = true;
// // 	for (int child : graph[vertex])
// // 	{
// // 		//take a action on child
// // 		// before enter the child
// // 		if (vis[child]) continue;
// // 		cout << "parent > " << vertex << " child > " << child << endl;
// // 		dfs(child);
// // 		//take action on child before
// // 		//after existing the child
// // 	}
// // 	// take action on vertex
// // 	// before existing child
// // 	cout<< "Exiting from the loop of "<< vertex<<endl;
// // }
// // int main()
// // {
// // 	int n, m;
// // 	cin >> n >> m;
// // 	for (int i = 0; i < m; ++i)
// // 	{
// // 		int v1, v2;
// // 		cin >> v1 >> v2;
// // 		graph[v1].push_back(v2);
// // 		graph[v2].push_back(v1);
// // 	}
// // 	cout << "Done\n";
// // 	dfs(1);
// // 	return 0;
// // }



// // // INPUT
// // // 6 9
// // // 1 3
// // // 1 5
// // // 3 5
// // // 3 4
// // // 3 6
// // // 3 2
// // // 2 6
// // // 4 6
// // // 5 6


// // // OUTPUT
// // // Done
// // // 1
// // // parent > 1 child > 3
// // // 3
// // // parent > 3 child > 5
// // // 5
// // // parent > 5 child > 6
// // // 6
// // // parent > 6 child > 2
// // // 2
// // // Exiting from the loop of 2
// // // parent > 6 child > 4
// // // 4
// // // Exiting from the loop of 4
// // // Exiting from the loop of 6
// // // Exiting from the loop of 5
// // // Exiting from the loop of 3
// // // Exiting from the loop of 1
























// // // https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/hacker-with-prime-bebe28ac/
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // const ll N = 1e6 + 10;
// // ll hp[N];
// // // ll hsh[N];
// // ll canRemove[N];

// // vector<ll> prime_factor(ll x)
// // {
// //     vector<ll> ans;
// //     ll hight_prime_factor = hp[x];
// //     while (x > 1)
// //     {
// //         while (x % hight_prime_factor == 0)
// //             x /= hight_prime_factor;
// //         ans.push_back(hight_prime_factor);
// //     }
// //     return ans;
// // }
// // int main()
// // {

// //     // HIGHT PRIME FACTOR
// //     for (ll i = 2; i < N; i++)
// //     {
// //         if (hp[i] == 0)
// //         {
// //             for (ll j = i; j < N; j += i)
// //             {
// //                 hp[j] = i;
// //             }
// //         }
// //     }

// //     ll n, q;
// //     cin >> n >> q;
// //     vector<int> a(n);
// //     for (ll i = 0; i < n; i++)
// //     {
// //         cin >> a[i];
// //     }
// //     for (ll i = 0; i < n; i++)
// //     {
// //         for (ll j = a[i]; j < N; j *= a[i])
// //         {
// //            canRemove[j] = 1;
// //         }
// //     }

// //     while (q--)
// //     {
// //         ll x;
// //         cin >> x;
// //         vector<ll> pf = prime_factor(x);
// //         bool isPossible = false;
// //         for (ll i = 0; i < pf.size(); i++)
// //         {
// //             for (ll j = i; j < pf.size(); j++)
// //             {
// //                 ll product = pf[i] * pf[j];
// //                 if (i == j && x % product != 0)
// //                     continue;
// //                 ll toRemove = x / product;
// //                 if (canRemove[toRemove] == 1 || toRemove == 1)
// //                 {
// //                     isPossible = true;
// //                     break;
// //                 }
// //             }
// //             if (isPossible)
// //             {
// //                 break;
// //             }
// //         }
// //         cout << (isPossible ? "YES\n" : "NO\n");
// //     }

// //     return 0;
// // }







// // // #include <iostream>
// // // using namespace std;
// // // long long int d, z, y;
// // // void extendedEuclid(long long int c, long long int m)
// // // {
// // // 	if (m == 0)
// // // 	{
// // // 		d = c;
// // // 		z = 1;
// // // 		y = 0;
// // // 	}
// // // 	else
// // // 	{
// // // 		extendedEuclid(m, c % m);
// // // 		long long int temp = z;
// // // 		z = y;
// // // 		y = temp - (c / m) * y;
// // // 	}
// // // }
// // // long long int modInverse(int c, int M)
// // // {
// // // 	extendedEuclid(c, M);
// // // 	return (z % M + M) % M;
// // // }
// // // long long int modularExponentiation(long long int x, long long int n, long long int M)
// // // {
// // // 	long long int result = 1;
// // // 	while (n > 0)
// // // 	{
// // // 		if (n % 2 == 1)
// // // 			result = (result * x) % M;
// // // 		x = (x * x) % M;
// // // 		n = n / 2;
// // // 	}
// // // 	return result;
// // // }
// // // int main()
// // // {
// // // 	long long int a, b, c, m, ans1, ans2;
// // // 	cin >> a >> b >> c >> m;
// // // 	ans1 = modularExponentiation(a, b, m);
// // // 	ans2 = modInverse(c, m);
// // // 	cout << ((ans1 % m) * (ans2 % m)) % m;
// // // 	return 0;
// // // }
// // // using namespace std;
// // // #define ll long long
// // // const ll N = 2e5 + 10; // == 2*10^5 + 10
// // // ll hsh[N];
// // // ll multiples_ct[N];

// // // int main()
// // // {
// // // 	ll n = 0;
// // // 	cin >> n;
// // // 	for (ll i = 0; i < n; ++i)
// // // 	{
// // // 		ll x ;
// // // 		cin >> x ;
// // // 		hsh[x]++;
// // // 	}
// // // 	for (ll i = 1; i <= N; ++i)
// // // 	{
// // // 		for (ll j = i; j <= N; j += i)
// // // 		{
// // // 			multiples_ct[i] += hsh[j];
// // // 		}
// // // 	}
// // // 	ll t = 0;
// // // 	cin >> t;
// // // 	while (t--) {
// // // 		ll a, b;
// // // 		cin >> a >> b;
// // // 		ll ans;
// // // 		ll lcm = (a * 1ll * b ) / __gcd(a , b);
// // // 		if (lcm <= N) {
// // // 			ans = (multiples_ct[a] + multiples_ct [b] ) - multiples_ct[lcm];
// // // 		}
// // // 		else {ans = multiples_ct[a] + multiples_ct [b];}
// // // 		cout << ans << endl;
// // // 	}
// // // 	return 0;
// // // }

// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {   int t; cin >> t;
// // // 	while (t--){
// // // 		int n,ans = 1, j = 2;
// // // 		cin >> n;
// // // 		do {ans = (1 << j) - 1;j++;}
// // // 		while (n % ans != 0);
// // // 		cout << n / ans <<endl;;
// // // 	}return 0;
// // // }
// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // const int n = 1e7 + 10;
// // // vector<bool> prime(n, 1);
// // // int check_prime()
// // // {
// // // 	prime[0] = prime[1] = false;
// // // 	for (int i = 2; i <= n; ++i)
// // // 	{
// // // 		if (prime[i])
// // // 		{
// // // 			for (int j = i * 2; j <= n; j += i)
// // // 			{
// // // 				prime[j] = false;
// // // 			}
// // // 		}
// // // 	}
// // // 	int n;
// // // 	cin >> n;
// // // 	vector<int> vi(n);
// // // 	for (int i = 0; i < n; i++)
// // // 	{
// // // 		cin >> vi[i];
// // // 	}
// // // 	for (int i = 0; i < n; i++)
// // // 	{
// // // 		int p = vi[i];
// // // 		if (prime[p])
// // // 		{
// // // 			cout << "NO" << endl;
// // // 		}
// // // 		else
// // // 		{
// // // 			int m = 0;
// // // 			for (int j = 1; j <= vi[i]; j++)
// // // 			{
// // // 				if (vi[i] % j == 0)
// // // 				{
// // // 					m++;
// // // 				}
// // // 				if (m == 4)
// // // 				{
// // // 					cout << "NO" << endl;
// // // 					break;
// // // 				}
// // // 			}
// // // 			if (m == 3)
// // // 			{
// // // 				cout << "YES" << endl;
// // // 			}
// // // 			// cout<<"m"<<m<<endl;
// // // 		}
// // // 	}

// // // 	return 0;
// // // }

// // // int main()
// // // {
// // // 	check_prime();
// // // 	return 0;
// // // }










// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // const int n = 1e7 + 10;
// // // vector<bool> prime(n, 1);
// // // vector<int> h(n, 0), l(n , 0);
// // // int main()
// // // {
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
// // // 	// for (int i = 0; i <= 30; ++i)
// // // 	// {	cout << "*****\n";
// // // 	// 	cout << i << " " << prime[i] << endl;  /// check it is prime or not
// // // 	// 	cout << l[i] << " " << h[i] << endl;  /// lowet and height prime factor
// // // 	// 	cout << "*****\n";
// // // 	// }
// // // 	// /  find prime factorization
// // // 	map<int, int> prime_factor;
// // // 	int num = 60;
// // // 	while (num > 1)
// // // 	{	int height_prime_factor = h[num];
// // // 		while (num % height_prime_factor == 0) {
// // // 			prime_factor[height_prime_factor]++;
// // // 			num /= height_prime_factor;
// // // 		}
// // // 	}
// // // 	for (auto x : prime_factor) {
// // // 		cout << x.first << " " << x.second << endl;
// // // 	}

// // // 	return 0;
// // // }
















// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // bool check_prime(int n) {
// // // 	bool is_prime = true;
// // // 	if (n == 1)return 1; // 1 is not prime number
// // // 	for (int i = 2; i * i < n; ++i)
// // // 	{
// // // 		if (n % i == 0) {
// // // 			is_prime = false;
// // // 			break;
// // // 		}
// // // 	} return is_prime;
// // // }
// // // void prime_factor_func(int n) {
// // // 	set<int> prime_factor;
// // // 	for (int i = 2; i * i <= n; ++i)
// // // 	{
// // // 		while (n % i == 0) {
// // // 			prime_factor.insert(i);
// // // 			n /= i;
// // // 		}
// // // 	}
// // // 	if (n > 1) {
// // // 		prime_factor.insert(n);
// // // 	}
// // // 	for (int i : prime_factor)
// // // 	{
// // // 		cout << i << endl;
// // // 	}
// // // }
// // // int main()
// // // {
// // // 	int n;
// // // 	n = 91;
// // // 	prime_factor_func(n);
// // // 	return 0;
// // // }



// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // // 	int n ;
// // // 	cin >> n;
// // // 	int ct = 0;
// // // 	for (int i = 1; i * i <= n; ++i)
// // // 	{
// // // 		if (n % i  == 0) {
// // // 			cout << i <<endl;
// // // 			ct++;
// // // 			if (i != n / i) {
// // // 				cout << n / i << endl;
// // // 				ct++;
// // // 			}
// // // 		}
// // // 	}
// // // 	cout<<endl<<ct<<endl;
// // // 	return 0;
// // // }




















// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // // 	int t = 0;
// // // 	cin >> t;
// // // 	while (t-- ) {
// // // 		long long a, b , m;
// // // 		cin >> a >> b >> m;
// // // 		int ans = 0;
// // // 		for (int i = b; i <= a; ++i)
// // // 		{

// // // 		}
// // // 		// if(b%m==0){
// // // 		// 	b--;
// // // 		// }
// // // 		// else if(m<=b &&  m-1 >= a){
// // // 		// 	b = m-1;
// // // 		// }
// // // 		// cout<<(b/m)+(b%m)<<endl;
// // // 	}

// // // 	return 0;
// // // }



// // /// solution of leetcode question
// // /// https://leetcode.com/problems/super-pow/submissions/

// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // class Solution {
// // // public:
// // // 	long long binaryMultplication(int a, int b , int M) {


// // // 		long long ans = 0;
// // // 		while (b)
// // // 		{	if (b & 1) {
// // // 				ans = (ans + a) % M;
// // // 			}
// // // 			a = ( a + a) % M;
// // // 			b = b >> 1;
// // // 		}
// // // 		return ans;

// // // 	}
// // // 	int bex(int a, int b, int M) {
// // // 		a %= M;
// // // 		int ans = 1;
// // // 		while (b) {
// // // 			if (b & 1) {
// // // 				ans = binaryMultplication(ans, a, M) ;
// // // 			}
// // // 			a = binaryMultplication(a, a, M);
// // // 			b >>= 1;
// // // 		}
// // // 		return ans;
// // // 	}
// // // 	int superPow(int a, vector<int>& b) {
// // // 		int ans  = 0;
// // // 		for (int x : b ) {
// // // 			ans = (ans * 1ll * 10 + x ) % 1140;
// // // 		}
// // // 		return bex(a, ans, 1337);
// // // 	}
// // // };



// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // typedef long long LL ;
// // // typedef string S;
// // // typedef double D;
// // // #define pi acos(-1.0)

// // // LL bigModIterative( LL a , LL b , LL m )
// // // {
// // // 	a %= m ;
// // // 	LL res = 1 ;
// // // 	while(b>0)
// // // 	{
// // // 		if(b&1) res = (res*a) % m ;
// // // 		a = (a*a) % m ;
// // // 		b >>= 1 ;
// // // 	}
// // // 	return res ;
// // // }

// // // int main()
// // // {

// // // 	LL n , k , m = 10000007 ;
// // // 	while(cin >> n >> k)
// // // 	{
// // // 		if(n==0 && k==0) return 0;
// // // 		LL res = ( bigModIterative(n,k,m) + 2*bigModIterative(n-1,k,m)+bigModIterative(n,n,m) + 2*bigModIterative(n-1,n-1,m) ) % m ;
// // // 		cout << res << endl;
// // // 	}

// // // 	return 0;
// // // }



// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // const int M = 10000007;

// // // long long binaryMultplication(long long a, long long b) {


// // // 	long long ans = 0;
// // // 	while (b)
// // // 	{	if (b & 1) {
// // // 			ans = (ans + a) % M;
// // // 		}
// // // 		a = ( a + a) % M;
// // // 		b = b >> 1;
// // // 	}
// // // 	return ans;

// // // }
// // // long long binaryExpoIterative(long long a, long long b) {


// // // 	long long ans = 1;
// // // 	while (b)
// // // 	{	if (b & 1) {
// // // 			ans = (ans * a) %M;
// // // 		}
// // // 		a = (a*a)%M;
// // // 		b = b >> 1;
// // // 	}
// // // 	return ans;

// // // }
// // // int main()
// // // {
// // // 	// cout<<binaryMultplication(2,4);
// // // 	long long n , k;
// // // 	while(cin >> n >> k){
// // // 		if(n==0 && k==0) return 0;
// // // 		cout<< (binaryExpoIterative(n,k) + 2 * binaryExpoIterative(n-1,k) + binaryExpoIterative(n,n) + 2 * binaryExpoIterative(n-1,n-1)) % M << endl;
// // // 	}
// // // 	return 0;
// // // }










// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int binaryExpoRRec(int a, int b) {
// // // 	if (b == 0)return 1;
// // // 	long res = binaryExpoRRec(a, b / 2);
// // // 	if (b & 1) {
// // // 		return a * res * res;
// // // 	} return res * res;
// // // }
// // // int main()
// // // {
// // // 	// double a = 1e34;
// // // 	// cout << fixed << setprecision(10) << a << endl;
// // // 	// output >  9999999999999999455752309870428160.0000000000

// // // 	cout << binaryExpoRRec(2, 16) << " " << pow(2, 16) << endl;

// // // 	return 0;
// // // }











// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // int euclid_gcd2(int a, int b) {
// // // 	if(b == 0) return a;
// // // 	return euclid_gcd2(b, a%b);
// // // }
// // // int euclid_gcd(int a, int b) {
// // // 	a = min(a,b);
// // // 	b = max(a,b);
// // // 	int c;
// // // 	while (b % a != 0) {
// // //          c = b % a;
// // //          b = a;
// // //          a = c;
// // // 	}return a;
// // // }
// // // int main()
// // // {

// // // 	// gcd(a,b) * lcm(a,b) = a * b;
// // // 	// gcd(0,d) = d
// // // 	// gcd(a,b) = gcd (b,a);
// // // 	cout<<euclid_gcd2(12,18)<<endl;
// // // 	cout<<__gcd(12,18)<<endl;
// // // 	cout<<"lcm = "<<(12*18)/__gcd(12,18)<<endl;
// // // 	return 0;
// // // }







// // //     // 00  2    4
// // // a > abcdadfghb
// // // b >
// // // c >







// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // vector<vector<int>> subset_f(vector<int>& nums) {
// // // 	int n = nums.size();
// // // 	int subsets_ct = (1 << n);
// // // 	vector<vector<int>> subsets;
// // // 	for (int mask = 0; mask < subsets_ct; ++mask)
// // // 	{
// // // 		vector<int> subset;
// // // 		for (int i = 0; i < n; ++i)
// // // 		{
// // // 			if ((mask & (1 << i)) != 0) { // cond will be true for set bit
// // // 				subset.push_back(nums[i]);
// // // 			}
// // // 		}
// // // 		subsets.push_back(subset);

// // // 	}
// // // 	return subsets;
// // // }


// // // int main()
// // // {

// // // 	int n;
// // // 	cin >> n;
// // // 	vector<int> v(n);
// // // 	for (int i = 0; i < n; ++i)
// // // 	{	cin >> v[i];
// // // 	}
// // // 	auto all_subset = subset_f(v);
// // // 	for (auto sub : all_subset) {
// // // 		for (int x : sub)
// // // 		{
// // // 			cout << x << " ";
// // // 		}
// // // 		cout << endl;
// // // 	}

// // // 	return 0;
// // // }

// // // // 3
// // // // 2 4 5


// // // // 2
// // // // 4
// // // // 2 4
// // // // 5
// // // // 2 5
// // // // 4 5
// // // // 2 4 5









// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // void printBinary(int num)
// // // {
// // // 	for (int i = 30; i >= 0; i--)
// // // 	{
// // // 		cout << ((num >> i) & 1);
// // // 	}
// // // 	cout << endl;
// // // }
// // // int main()
// // // {
// // //     int n ;
// // // 	cin >> n;
// // // 	vector<int> masks(n);
// // // 	for (int i = 0; i < n; ++i)
// // // 	{
// // // 		int num_worker;
// // // 		cin >> num_worker;
// // // 		int mask = 0;
// // // 		for (int j = 0; j < num_worker; ++j)
// // // 		{
// // // 			int day;
// // // 			cin >> day;
// // // 			mask = (mask | (1 << day));
// // // 		}
// // // 		masks[i] = mask;
// // // 	}
// // // 	for (int i = 0; i < n; ++i)
// // // 	{
// // // 		cout << masks[i] << endl;
// // // 		printBinary(masks[i]);
// // // 	}
// // // 	int max_day = 0;
// // // 	int i1 = -1;
// // // 	int j1 = -1;
// // // 	for (int i = 0; i < n; ++i)
// // // 	{	for (int j = i + 1; j < n; ++j)
// // // 		{
// // // 			int intersection = (masks[i] & masks[j]);
// // // 			int comman_bit = __builtin_popcount(intersection);
// // // 			cout << i << " " << j << " " << comman_bit << endl;
// // // 			if (max_day < comman_bit) {
// // // 				max_day = comman_bit;
// // // 				i1 = i;
// // // 				j1 = j;
// // // 			}
// // // 			// max_day = max( max_day ,comman_bit);
// // // 		}
// // // 	}
// // // 	cout << endl;
// // // 	cout << i1 << " "  << j1 << " " << max_day << endl;
// // // 	return 0;
// // // }



// // // //// INPUT


// // // // 5
// // // // 4
// // // // 1 4 7 9
// // // // 6
// // // // 2 9 1 7 25 29
// // // // 7
// // // // 1 23 4 7 9 11 29
// // // // 10
// // // // 2 28 8 7 9 10 30 21 18 19
// // // // 4
// // // // 1 11 29 7





// // // /// OUTPUT

// // // // 658
// // // // 0000000000000000000001010010010
// // // // 570425990
// // // // 0100010000000000000001010000110
// // // // 545262226
// // // // 0100000100000000000101010010010
// // // // 1345062788
// // // // 1010000001011000000011110000100
// // // // 536873090
// // // // 0100000000000000000100010000010
// // // // 0 1 3
// // // // 0 2 4
// // // // 0 3 2
// // // // 0 4 2
// // // // 1 2 4
// // // // 1 3 3
// // // // 1 4 3
// // // // 2 3 2
// // // // 2 4 4
// // // // 3 4 1

// // // // 0 2 4












// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // int main()
// // // // {

// // // // 	// 1) even and odd
// // // // 	// int a = 13;
// // // // 	// if (a & 1) {
// // // // 	// 	cout << "It is odd Numer" << endl;
// // // // 	// } else {
// // // // 	// 	cout << "It is even number" << endl;
// // // // 	// }

// // // // 	// 2 ) divide by 2 or * by 2
// // // // 	// int a =12;
// // // // 	// int b =12;
// // // // 	// cout<<((a+b)>>1)<<endl; // 12
// // // // 	// cout<<((a+b)<<1)<<endl; // 48

// // // // 	// 3 ) uppercase to lower case
// // // // 	// print A to Z
// // // // 	// for (char i = 'A'; i <= 'Z'; ++i)
// // // // 	// {
// // // // 	// cout<<i<<endl;
// // // // 	// cout<<(char)(i|' ')<<endl;
// // // // 	// }

// // // // 	// 3.1) upper to lower > take or-operation with (1<<5) or space

// // // // 	// char A = 'A';
// // // // 	// char s = A | (1 << 5);
// // // // 	// cout << s << endl;

// // // // 	// char A = 'A';
// // // // 	// char s = A | ' ';
// // // // 	// cout << s << endl;

// // // // 	// 3.2) lower to upper > take ans-operation with ~(1<<5) or underscore

// // // // 	// char a = 'l';
// // // // 	// char ans = a & (~(1 << 5));
// // // // 	// cout << ans << endl;

// // // // 	// char a = 'l';
// // // // 	// char ans = a & ('_');
// // // // 	// cout << ans << endl;


// // // // 	//  4) check power of 2
// // // // 	// int n = 16;
// // // // 	// if((n&n-1)==0){
// // // // 	// 	cout<<"YES It is power of 2"<<endl;
// // // // 	// }else{
// // // // 	// 	cout<<"No "<<endl;
// // // // 	// }

// // // // 	//  5 )clear lsb till ith bit
// // // // 	//  eg. a = 00000111011 > 0000010000 <i=4>
// // // // 	// int i = 4;
// // // // 	// int a = 59;
// // // // 	// int ans = a & (~(1 << (i + 1) - 1));

// // // //     int a =2;
// // // //     int b=4;
// // // //     a = a^b;
// // // //     b = a^b;
// // // //     a = a^b;
// // // //     cout<<a<<b<<endl;
// // // // 	return 0;
// // // // }