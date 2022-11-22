#include <bits/stdc++.h>
using namespace std;
int main()
{

	// 1) even and odd
	// int a = 13;
	// if (a & 1) {
	// 	cout << "It is odd Numer" << endl;
	// } else {
	// 	cout << "It is even number" << endl;
	// }

	// 2 ) divide by 2 or * by 2
	// int a =12;
	// int b =12;
	// cout<<((a+b)>>1)<<endl; // 12
	// cout<<((a+b)<<1)<<endl; // 48

	// 3 ) uppercase to lower case
	// print A to Z
	// for (char i = 'A'; i <= 'Z'; ++i)
	// {
	// cout<<i<<endl;
	// cout<<(char)(i|' ')<<endl;
	// }

	// 3.1) upper to lower > take or-operation with (1<<5) or space

	// char A = 'A';
	// char s = A | (1 << 5);
	// cout << s << endl;

	// char A = 'A';
	// char s = A | ' ';
	// cout << s << endl;

	// 3.2) lower to upper > take ans-operation with ~(1<<5) or underscore

	// char a = 'l';
	// char ans = a & (~(1 << 5));
	// cout << ans << endl;

	// char a = 'l';
	// char ans = a & ('_');
	// cout << ans << endl;


	//  4) check power of 2
	// int n = 16;
	// if((n&n-1)==0){
	// 	cout<<"YES It is power of 2"<<endl;
	// }else{
	// 	cout<<"No "<<endl;
	// }

	//  5 )clear lsb till ith bit
	//  eg. a = 00000111011 > 0000010000 <i=4>
	// int i = 4;
	// int a = 59;
	// int ans = a & (~(1 << (i + 1) - 1));

	return 0;
}