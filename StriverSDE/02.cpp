#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans(n);
  ans[0].push_back(1);
  if(n == 1) return ans;
  ans[1].push_back(1);
  ans[1].push_back(1);
  if(n == 2) return ans;
  for(int i = 2; i < n; ++i)
  {
    
     for(int k = 0; k <= i; ++k)
     {  
        if(k == 0 || k == i) ans[i].push_back(1);
        else ans[i].push_back(ans[i-1][k]+ans[i-1][k-1]);
     }
  }
  return ans;
}
