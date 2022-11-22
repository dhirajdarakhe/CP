/*

5 3
1 2 100
2 5 100
3 4 100
200

#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int ar[N];
int main()
{
    int n, t;
    cin >> n >> t;
    int a, b, d;
    while (t--)
    {
        cin >> a >> b >> d;
        for (int i = a; i <= b; i++)
        {
           ar[i] += d;
        }
        
    }
    cout<< *max_element(ar+1 , ar+n);


    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int ar[N];
// long long int hsh[N];
void prefix_sum(int n)
{
    for (int i = 1; i <= n; i++)
    {
        ar[i] += ar[i-1];
        cout<<ar[i]<<endl;
    }
}
int main()
{
    int n, t;
    cin >> n >> t;
    int a, b, d;
    while (t--)
    {
        cin >> a >> b >> d;
        ar[a] += d;
        d = -d;
        ar[b+1] += d;
    }
    prefix_sum(n);
    cout << *max_element(ar , ar + N);

    return 0;
}