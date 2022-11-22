#include <bits/stdc++.h>
using namespace std;
long long m;
int n;
const int N = 1e6+10;
long long tree[N];


bool isSufficident(int h){
	long long wood = 0;
	for (int i = 0; i <  n; ++i)
	{
      if(tree[i] >= h){
      	wood += tree[i] - h;
      }
	}
	return wood>=m;
}
int main()
{
	cin>>n>>m;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>tree[i];
	}
	long long lo = 0, hi = 1e9, mid;
	while(hi - lo > 1){
		mid = (hi + lo) / 2;
		if(isSufficident(mid)){
			lo = mid;
		}
		else{
			hi = mid - 1;
		}
	}
	if(isSufficident(hi)){
	  cout<<hi<<endl;
	}else{
		cout<<lo<<endl;
	}

  return 0;
}
bi