#include <bits/stdc++.h>
using namespace std;

int main()
{
  double esp = 1e-6;
  double x = 23;
  // cin>>x;
  double l = 1, u = x;
  double mid;
  while (u - l > esp)
  {
    mid = (l + u) / 2;
    if (mid * mid < x)
    {
      l = mid;
    }
    else
    {
      u = mid;
    }
  }
  cout << l << endl
       << u << endl;

  cout << pow(23, 1 / 2) << endl;   /// wrong
  cout << pow(23, 1.0 / 2) << endl; ///  right

  return 0;
}