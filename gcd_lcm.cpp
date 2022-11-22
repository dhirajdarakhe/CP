

#include <bits/stdc++.h>
using namespace std;
int euclid_gcd2(int a, int b) {
	if(b == 0) return a;
	return euclid_gcd2(b, a%b);
}
int euclid_gcd(int a, int b) {
	a = min(a,b);
	b = max(a,b);
	int c;
	while (b % a != 0) {
         c = b % a;
         b = a;
         a = c;
	}return a;
}
int main()
{   
	
	// gcd(a,b) * lcm(a,b) = a * b;
	// gcd(0,d) = d
	// gcd(a,b) = gcd (b,a);
	cout<<euclid_gcd2(12,18)<<endl;
	cout<<__gcd(12,18)<<endl;
	cout<<"lcm = "<<(12*18)/__gcd(12,18)<<endl;
	return 0;
}





