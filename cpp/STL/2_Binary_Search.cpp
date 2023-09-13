#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    if (binary_search(arr.begin(), arr.end(), 5))
        cout << "FOUND";
    else
        cout << "NOT FOUND";
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}