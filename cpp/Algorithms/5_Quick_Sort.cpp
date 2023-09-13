#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int Partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high]; // Choose the pivot as the element at the high index
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot) // Compare with the pivot and swap if smaller
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void QuickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = Partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10};
    QuickSort(arr, 0, arr.size() - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // TIME END
    end_time = high_resolution_clock::now();
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}
