#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initializes a 2D Vector array
    vector<vector<int>> arr = {{1, 2, 3, 4, 5, 6, 7, 8},
                               {8, 7, 6, 5, 4, 3, 2, 1}};

    vector<int> a = {1, 2, 3, 4, 5};

    for (auto rows : arr)
    {
        for (auto cols : rows)
        {
            cout << cols << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    for (int i = 0; i < a.size(); i++)
        cout << a.at(i) << ' ';
    return 0;
}