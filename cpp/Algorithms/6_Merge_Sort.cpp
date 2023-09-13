#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

void merge(int arr[], int left[], int left_size, int right[], int right_size)
{
    int i, j, k;
    i = j = k = 0;

    while (i < left_size && j < right_size)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < left_size)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < right_size)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int n)
{
    if (n < 2)
        return;
    int mid = n / 2;
    int left[mid], right[n - mid];
    int i;

    for (i = 0; i < mid; i++)
        left[i] = arr[i];
    for (i = mid; i < n; i++)
        right[i - mid] = arr[i];

    mergesort(left, mid);
    mergesort(right, n - mid);

    merge(arr, left, mid, right, n - mid);
}

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 10};
    mergesort(arr, sizeof(arr) / sizeof(int));
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}