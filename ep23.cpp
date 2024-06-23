#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 7};
    vector<int>::iterator it = v.begin();

    cout << *(it + 1) << endl;

    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << endl;
    }

    vector<pair<int, int>> v_p = {{2, 3}, {4, 5}, {6, 7}};
    vector<pair<int, int>>::iterator it_p; // Use a different name for this iterator

    for (it_p = v_p.begin(); it_p != v_p.end(); ++it_p)
    {
        cout << (*it_p).first << " " << (*it_p).second << endl;
    }

    return 0;
}
