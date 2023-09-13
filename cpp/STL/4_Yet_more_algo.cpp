#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    int arr[] = {1, 2, 3, 4, 5, -6};
    int n = sizeof(arr) / sizeof(int);
    all_of(arr, arr + n, [](int x)
           { return x > 0; })
        ? cout << "\nALL ARE POSITIVE"
        : cout << "\nALL ARE NOT POSITIVE";
    any_of(arr, arr + n, [](int x)
           { return x < 0; })
        ? cout << "\nALL ARE POSITIVE"
        : cout << "\nALL ARE NOT POSITIVE";
    none_of(arr, arr + n, [](int x)
            { return x < 0; })
        ? cout << "\nALL ARE POSITIVE"
        : cout << "\nALL ARE NOT POSITIVE";

    int arr2[n];
    copy_n(arr, n, arr2);
    for (int i : arr2)
    {
        cout << "\n"
             << i;
    }

    iota(arr2, arr2 + 7, 20);
    for (int i : arr2)
    {
        cout << "\n"
             << i;
    }
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}