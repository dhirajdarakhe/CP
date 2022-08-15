// https://www.lintcode.com/problem/434/

/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
 
 
 //  EQ
#define v64 vector<int>
#define ll long long
#define forn(i, e) for (ll i = 0; i < e; i++)
struct DisjointSet
{
    v64 parent;
    v64 size;
    DisjointSet(ll maxSize)
    {
        parent.resize(maxSize + 1);
        size.resize(maxSize + 1);
        for (ll i = 1; i <= maxSize; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }
    ll find_set(ll x)
    {
        if (x == parent[x])
            return x;
        return parent[x] = find_set(parent[x]); // path compression 
    }
    void union_set(ll a, ll b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (size[a] < size[b])  // size compression
                swap(a, b);
            parent[b] = a;
            size[a] += size[b]; 
        }
    }
};
class Solution {
public:
    bool isValidPlace(int x, int y, int row, int colu)
    {
        return (x >= 0 && y >= 0 && x < row && y < colu);
    }
    vector<int> numIslands2(int n, int m, vector<Point> &operators) {
       DisjointSet dsu(n * m);
       int ct = 0;
       v64 v;
       int arr[n][m];
       int dx[4] = {-1, 1, 0, 0};
       int dy[4] = {0, 0, -1, 1};
       forn(i,n) forn(j,m) arr[i][j] = 0;
       for(auto it : operators){
           int x = it.x;
           int y = it.y;
           if(( arr[x][y] )){
              v.push_back(ct);
              continue;
            }
            ct++;
           arr[x][y] = 1;
           int ind1 = (x * m) + (y + 1);
           forn(i,4){
               if(isValidPlace(x+dx[i], y+dy[i], n, m) && arr[x+dx[i]][y+dy[i]]  == 1){
                   int ind2 = (( x + dx[i] ) * m) + ( y + dy[i] + 1);
                   if(dsu.find_set(ind1) != dsu.find_set(ind2)){
                       ct--;
                       dsu.union_set(ind1, ind2);
                   }
               }
           }
           v.push_back(ct);
       }
       return v;
    }
};
 
