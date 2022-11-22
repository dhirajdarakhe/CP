#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define pdbs tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int main()
{
    // Ordered set declared with name A
    pdbs A;

    // insert function to insert in
    // ordered set same as SET STL
    A.insert(5);
    A.insert(1);
    A.insert(2);

    // Finding the second smallest element
    // in the set using * because
    // find_by_order returns an iterator
    cout << *(A.find_by_order(1))
         << endl;

    // Finding the number of elements
    // strictly less than k=4
    cout << A.order_of_key(4)
         << endl;

    // Finding the count of elements less
    // than or equal to 4
    // i.e. strictly less
    // than 5 if integers are present
    cout << A.order_of_key(5)
         << endl;

    // Deleting 2 from the set if it exists
    if (A.find(2) != A.end())
        A.erase(A.find(2));

    // Now after deleting 2 from the set
    // Finding the second smallest element in the set
    cout << *(A.find_by_order(1))
         << endl;

    // Finding the number of
    // elements strictly less than k=4
    cout << A.order_of_key(4)
         << endl;

    return 0;
}
