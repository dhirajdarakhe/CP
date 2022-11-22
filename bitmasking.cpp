#include <bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
	for (int i = 30; i >= 0; i--)
	{
		cout << ((num >> i) & 1);
	}
	cout << endl;
}
int main()
{
    int n ;
	cin >> n;
	vector<int> masks(n);
	for (int i = 0; i < n; ++i)
	{
		int num_worker;
		cin >> num_worker;
		int mask = 0;
		for (int j = 0; j < num_worker; ++j)
		{
			int day;
			cin >> day;
			mask = (mask | (1 << day));
		}
		masks[i] = mask;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << masks[i] << endl;
		printBinary(masks[i]);
	}
	int max_day = 0;
	int i1 = -1;
	int j1 = -1;
	for (int i = 0; i < n; ++i)
	{	for (int j = i + 1; j < n; ++j)
		{
			int intersection = (masks[i] & masks[j]);
			int comman_bit = __builtin_popcount(intersection);
			cout << i << " " << j << " " << comman_bit << endl;
			if (max_day < comman_bit) {
				max_day = comman_bit;
				i1 = i;
				j1 = j;
			}
			// max_day = max( max_day ,comman_bit);
		}
	}
	cout << endl;
	cout << i1 << " "  << j1 << " " << max_day << endl;
	return 0;
}



//// INPUT


// 5
// 4
// 1 4 7 9
// 6
// 2 9 1 7 25 29
// 7
// 1 23 4 7 9 11 29
// 10
// 2 28 8 7 9 10 30 21 18 19
// 4
// 1 11 29 7





/// OUTPUT

// 658
// 0000000000000000000001010010010
// 570425990
// 0100010000000000000001010000110
// 545262226
// 0100000100000000000101010010010
// 1345062788
// 1010000001011000000011110000100
// 536873090
// 0100000000000000000100010000010
// 0 1 3
// 0 2 4
// 0 3 2
// 0 4 2
// 1 2 4
// 1 3 3
// 1 4 3
// 2 3 2
// 2 4 4
// 3 4 1

// 0 2 4





