#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    q.push("abs");
    q.push("abd");
    q.push("abf");
    q.push("jkj");
    q.push("hjh");
    q.push("tfh");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();

    }
    return 0;
}