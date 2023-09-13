#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort(begin(arr), end(arr));

    // PRINTING THIS RESULT IN PRINTING ADDRESS
    cout << begin(arr) << endl
         << end(arr) << endl;

    for (int i : arr)
    {
        cout << i << endl;
    }

    int arr2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int asize = sizeof(arr2) / sizeof(int);

    sort(arr2, arr2 + asize);

    for (int i : arr2)
    {
        cout << i << endl;
    }

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}