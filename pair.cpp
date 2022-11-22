#include <bits/stdc++.h>
using namespace std;
int main()
{ /// if we ned to swap the pair then use pair

    pair<int, string> p;
    p = make_pair(22, "Dhiraj");
    // or p = {22, "Dhiraj"};
    cout << p.first << " " << p.second << endl;

    pair<int, int> p_array[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> p_array[i].first >> p_array[i].second;
    }
    cout << "Print" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p_array[i].first << p_array[i].second << " ";
    }

    return 0;
}