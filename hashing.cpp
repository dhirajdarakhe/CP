#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);    
    }
    cout<<"MEX "<<v[n-2]<<" "<<v[1]<<endl;
    if(v[n-2]%2 || v[1]%2==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
    return 0;
}
