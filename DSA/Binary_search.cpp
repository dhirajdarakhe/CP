#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a[7] = {1, 2, 4, 6, 8, 9, 12};
    int lb = 0, up = 6;
    int mid = 0;
    int find_ele = 48;
    while (up - lb > 1)
    {
        mid = (up + lb) / 2;
        if (a[mid] < find_ele)
        {

            lb = mid + 1;
        }
        else
        {
            up = mid;
        }
    }
    if (a[lb] == find_ele)
    {
        cout << a[lb] << " at " << lb << endl;
    }
    else if (a[up] == find_ele)
    {
        cout << a[up] << " at " << up << endl;
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}
