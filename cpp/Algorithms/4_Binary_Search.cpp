#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

bool search(vector<int> arr, int key, int low, int high)
{
    if (low > high)
    {
        return false;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] > key)
    {
        return search(arr, key, low, mid - 1);
    }
    else
    {
        return search(arr, key, mid + 1, high);
    }
}

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    vector<int> arr = {1, 2, 3, 4, 5, 5, 67, 8, 9};
    cout << search(arr, 9, 0, arr.size());
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}