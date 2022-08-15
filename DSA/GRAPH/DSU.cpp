 
 
 //  EQ
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
