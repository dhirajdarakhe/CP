
#include <bits/stdc++.h>
using namespace std;
// bool cmp(pair<int, string> a, pair<int, string> b) {
//     if(a.first != b.first){
//         if(a.first > b.first){
//             return true;
//         } return false;
//     }else{
//     return a.second > b.second;
//     }
// } // dec inc
// bool cmp(pair<int, string> a, pair<int, string> b) {
//     if (a.first != b.first) {
//         if (a.first > b.first) { // 5  - - - 6 
//             return false; // do swap
//         } return true;  // don't swap
//     } else {
//         if (a.second < b.second) {
//             return false;
//         } return true;
//     }
// } // inc dec
bool cmp(pair<int, string> a, pair<int, string> b) {
    if (a.first != b.first) {
        return a.first > b.first; // ince
    } else {
        return a.second < b.second;  // dec
    }
} // inc dec
int main()
{   int t;
    cin >> t;
    vector<pair<int, string>> v;
    string s; int i1;
    for (int i = 0; i < t; ++i)
    {
        cin >> s >> i1;
        v.push_back({i1, s});
    }
    // sort(v.begin(), v.end()); // increasing order
    // if you want to swap then return flase
    // else return true
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < t; ++i)
    {
        cout << v[i].second << " " << v[i].first << "\n";
    }
    return 0;
}