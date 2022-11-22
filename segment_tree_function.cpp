#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=2e5+3;
vector<ll> A(N);
vector<ll> tree(4*N+1);
void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = A[start];
        return;
    }
    
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = max(tree[2*node] , tree[2*node+1]);
    
}

int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return INT_MIN;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return max(p1 , p2);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>A[i];
	}
	build(1,1,m);
	ll q;
	cin>>q;
	for(int i=0;i<q;i++){
	ll xs,ys,xf,yf,k;
	cin>>xs>>ys>>xf>>yf>>k;
	if(abs(xs-xf)%k!=0 || abs(ys-yf)%k!=0){
	    cout<<"NO"<<endl;
	}else{
	    ll val=query(1,1,m,min(ys,yf),max(ys,yf));
	        ll diff=abs(n-xs);
	        ll nextval=k*(diff/k);
	        xs+=nextval;
	        if(xs>val){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	}
		
	}
}