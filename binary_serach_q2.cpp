// https://www.spoj.com/problems/AGGRCOW/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n, cows;
int positions[N];
bool cinPlaceCows(int minDis){
	
}
int main()
{ 
	int t =0;
	cin >> t;
	while(t--){
		cin>> n>> cows;
		for (int i = 0; i < n; ++i)
		{
			cin  >> positions[i];
		}
		long long lo = 0, hi = 1e9, mid;
		while(hi - lo > 1){
			mid = (lo + hi) / 2;
			if(cinPlaceCows(mid))
			{
				lo = mid;
			}else{
				hi = mid - 1;
			}
		}
		if(cinPlaceCows(hi)){
			 
		}
		
	}
	return 0;
}