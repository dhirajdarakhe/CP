
#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a = 12.234, b = -7.7890234567;
	// cout << floor(a) << endl;
	// cout << floor(b) << endl;  // smaller number

	// // float a = 12.234, b = -7.7890234567;
	// cout << ceil(a) << endl;
	// cout << ceil(b) << endl;  // greater number

	// // remove the digit after the decimal point
	// cout << trunc(b) << endl;

	// // round up the number
	// cout<< round(b) << endl;

	// setprecision()
	double pi = 3.14159, npi = -3.14159;
	cout << fixed << setprecision(0) << pi << " " << npi
	     << endl;
	cout << fixed << setprecision(1) << pi << " " << npi
	     << endl;
	cout << fixed << setprecision(2) << pi << " " << npi
	     << endl;
	cout << fixed << setprecision(3) << pi << " " << npi
	     << endl;
	cout << fixed << setprecision(4) << pi << " " << npi
	     << endl;
	cout << fixed << setprecision(5) << pi << " " << npi
	     << endl;
	cout << fixed << setprecision(6) << pi << " " << npi
	     << endl;
	cout << fixed << setprecision(3) << a << " " << b << endl;
	return 0;
}