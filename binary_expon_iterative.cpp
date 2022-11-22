
//  // GENERAL FORM

// #include <bits/stdc++.h>
// using namespace std;
// const int M = 1e9 + 7;
// int binaryExpoIterative(int a, int b)
// {

//     int ans = 1;
//     while (b)
//     {
//         if (b & 1)
//         {
//             ans = (ans * 1ll * a) % M;
//         }
//         a = (a * 1ll * a) % M;
//         b = b >> 1;
//     }
//     return ans;
// }
// int main()
// {
//     cout << pow(362, 125) << endl;
//     cout << binaryExpoIterative(362, 125);
//     return 0;
// }

// //  CASE -: 1 )
// // IF a <= 1e18;

#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
// int binaryExpoIterative(int a, int b)
// {
//     a %= M;  /// new step is added
//     int ans = 1;
//     while (b)
//     {
//         if (b & 1)
//         {
//             ans = (ans * 1ll * a) % M;
//         }
//         a = (a * 1ll * a) % M;
//         b = b >> 1;
//     }
//     return ans;
// }
int main()
{
    cout << pow(2,10) << endl;
    // cout << binaryExpoIterative(362, 125);
    return 0;
}

// //  CASE -: 2 )
// // IF a <= 1e18; and  M <= 1e18;

// #include <bits/stdc++.h>
// using namespace std;
// const int M = 1e9 + 18;

// long long binaryMultplication(long long a, long long b) {

// 	long long ans = 0;
// 	while (b)
// 	{	if (b & 1) {
// 			ans = (ans + a) % M;
// 		}
// 		a = ( a + a) % M;
// 		b = b >> 1;
// 	}
// 	return ans;

// }
// long long binaryExpoIterative(long long a, long long b) {

// 	long long ans = 1;
// 	while (b)
// 	{	if (b & 1) {
// 			ans = binaryMultplication(ans , a );  

// for multification new function is added
///  beacause while multi of a = a * a here may be become 1e17 ,
// so there will no effect of M and for next tern a = a * a ,
//  a will overflow that why new mwthod of multification is introduce

// 		}
// 		a = binaryMultplication(a,a);
// 		b = b >> 1;
// 	}
// 	return ans;

// }
// int main()
// {
// 	cout << pow(2, 4) << endl;
// 	cout << binaryExpoIterative(2, 4);
// 	return 0;
// }
