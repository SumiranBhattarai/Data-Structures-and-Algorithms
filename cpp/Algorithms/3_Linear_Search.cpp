#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

bool search(vector<int> arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (key == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    vector<int> arr = {1, 2, 3, 4, 5, 5, 67, 8, 9};
    cout << search(arr, 7);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}