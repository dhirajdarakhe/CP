// https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question-ii/


//  //  //  ANS

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// { 
// 	int n;
// 	cin >> n;
// 	set<pair<int, int>> points_st;
// 	vector<pair<int, int>> points(n);
	
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> points[i].first >> points[i].second ;
// 	    points_st.insert(points[i]);	
// 	}
// 	int ar_min = INT_MAX, ar_max = INT_MIN;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		for (int j = 0; j < n; ++j)
// 		{
// 			auto p1 = points[i];
// 			auto p2 = points[j];
// 			if(p1.first == p2.first || p1.second == p2.second) continue;
// 			int x1 = p1.first, y1 = p1.second;
// 			int x2 = p2.first, y2 = p2.second;
// 			if( points_st.count({x1,y2}) && points_st.count({x2,y1})){
// 				int ar = abs(x2-x1) * abs(y2-y1);
// 				ar_max = max(ar, ar_max);
// 				ar_min = min(ar, ar_min);
// 			}
			
// 		}
// 	}
// 	if(ar_min == INT_MAX || ar_min == INT_MAX){
// 		cout<<-1<<endl;
// 	}else{
// 		cout<< ar_max - ar_min <<endl;
// 	}
//   return 0;
// }






#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;;
    cin >> t ;
    
  return 0;
}

























// #include <bits/stdc++.h>
// using namespace std;
// int main()
// { 
// 	long long n,m;
// 	cin>>n>>m;
// 	vector<long long> v(n);
// 	for (long long i = 0; i < n; ++i)
// 	{
// 		cin>>v[i];
// 	}
// 	long long q;
// 	cin>>q;
// 	vector<long long> ans;
// 	long long q1;
// 	for (long long i = 0; i < q; ++i)
// 	{    
// 		cin>> q1;
// 		long long max = 0;
// 		for (auto x : v)
// 		{
// 			x += q1;
// 			max = x % m;
// 			ans.push_back(max);
// 		}
// 		cout<< *max_element(ans.begin(),ans.end()) << endl;
// 		ans.clear();
// 	}
//   return 0;
// }