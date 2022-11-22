#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5 + 7;
ll parent[N];
ll size[N];
void make(int v) {
    parent[v] = v;
    size[v] = 1;
}
int find(int v) {
    if (v == parent[v]) return v;
    // path compression
    return parent[v] = find(parent[v]);
}

void Union(int a , int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    //optimise by size
    if(size[b] > size[a]) swap(a,b);
    size[a] += size[b];
    parent[b] = a;
}
// cpxty
// alpha(n); reverseakerman function
// amotarized complexity
int main()
{
    return 0;
}


"struct DisjointSet{",
   " v64 parent;",
   " v64 size;",
    "DisjointSet(ll maxSize){",
       " parent.resize(maxSize);",
        "size.resize(maxSize);",
        "for(ll i = 0; i < maxSize; i++){",
            "parent[i] = i;",
            "size[i] = 1;",
        "}","// make new node ",
   " }",
    "ll find_set(ll x){",
        "if(x == parent[x])return x;",
        "return parent[x] = find_set(parent[x]);",
    "}","// it gives parent of the group ",
    "void union_set(ll a, ll b){",
        "a = find_set(a);",  
        "b = find_set(b);",
        "if(a != b){",
            "if(size[a] < size[b]) swap(a,b);",
            "parent[b] = a;",
            "size[a] += size[b];" ,
        "}","// make pair ",
   " }",
"};",
 