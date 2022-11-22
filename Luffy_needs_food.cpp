// https://www.hackerearth.com/problem/algorithm/luffy-needs-food/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	while (t--) {
		int n , k;
		long long f;
		cin >> n >> k >> f;
		vector<pair<int, int>> prs;
		for (int i = 0; i < n; ++i)
		{
			int dis, food;
			cin >> dis >> food;
			prs.push_back({k - dis, food});
		}
		int ans = 0;
		multiset<int> food_av;
		sort(prs.begin(), prs.end());
		bool can_reach = true;
		int cur = 0;
		for (int i = 1; i < k; ++i)
		{
			f--;
			if (prs[cur].first == i) {
				food_av.insert(prs[cur].second);
				cur++;
			}
			if(f == 0){
				if(food_av.size() == 0){
					can_reach = false;
					break;
				}else{
					auto it = --food_av.end();
					f += (*it);
					food_av.erase(it);
					ans ++;
				}
			}
		}
		if(can_reach){
			cout<<ans<<endl;
		}else{
			cout<<-1<<endl;;
		}


	}
	return 0;
}





