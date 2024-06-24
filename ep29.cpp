#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, set<string>> mark_map; // Corrected the map declaration
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int marks;
        string name;
        cin >> name >> marks;
        mark_map[marks].insert(name); // Corrected the insertion
    }

    if (!mark_map.empty()) // Ensure map is not empty before accessing
    {
        auto cur_it = --mark_map.end();

        while (true)
        {
            auto &students = (*cur_it).second;
            int marks = (*cur_it).first;

            for (const auto &student : students)
            {
                cout << student << " " << marks << endl;
            }

            if (cur_it == mark_map.begin())
                break;
                
            --cur_it;
        }
    }

    return 0;
}
