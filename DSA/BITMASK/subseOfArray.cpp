
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subset_f(vector<int>& nums) {
	int n = nums.size();
	int subsets_ct = (1 << n); // total number of set can be ganerated from array of size n is subsets_ct - 1;
	vector<vector<int>> subsets;
	for (int mask = 0; mask < subsets_ct; ++mask)
	{
		vector<int> subset;
		for (int i = 0; i < n; ++i)
		{
			if ((mask & (1 << i)) != 0) { // cond will be true for set bit
				subset.push_back(nums[i]);
			}
		}
		subsets.push_back(subset);

	}
	return subsets;
}


int main()
{

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{	cin >> v[i];
	}
	auto all_subset = subset_f(v);
	for (auto sub : all_subset) {
		for (int x : sub)
		{
			cout << x << " ";
		}
		cout << endl;
	}

	return 0;
}

// 3
// 2 4 5


// 2 
// 4 
// 2 4 
// 5 
// 2 5 
// 4 5 
// 2 4 5
