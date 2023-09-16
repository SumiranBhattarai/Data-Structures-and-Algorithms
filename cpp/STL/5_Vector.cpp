#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "---------------------CAPACITY---------------------" << endl;
    cout << "BEGIN: ";
    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << endl;

    cout << "CBEGIN: ";
    for (auto it = arr.cbegin(); it != arr.end(); it++)
        cout << *it << endl;

    cout << "RBEGIN: ";
    for (auto it = arr.rbegin(); it != arr.rend(); it++)
        cout << *it << endl;

    cout << "CRBEGIN: ";
    for (auto it = arr.crbegin(); it != arr.crend(); it++)
        cout << *it << endl;

    cout << endl
         << endl;

    cout << "---------------------ELEMENT ACCESS---------------------" << endl;
    cout << "At 2: " << arr.at(2) << endl;
    cout << "front(): " << arr.front() << endl;
    cout << "back(): " << arr.back() << endl;
    int *pos = arr.data();
    auto pos2 = arr.data();
    cout << "int *pos: " << *pos << endl;
    cout << "auto pos: " << *pos2 << endl;

    cout << "---------------------MODIFIERS---------------------" << endl;
    vector<int> arr2;
    cout << "assign(5,10): " << endl;
    arr2.assign(5, 10);
    for (auto it : arr2)
        cout << it << endl;
    // TIME END

    cout << "insert(a.begin()+2,2): " << endl;
    arr2.insert(arr2.begin() + 2, 2);
    for (auto it : arr2)
        cout << it << endl;

    cout << "erase(a.begin()+2)" << endl;
    arr2.erase(arr2.begin() + 2);
    for (auto it : arr2)
        cout << it << endl;

    cout << "emplace_back(INSERT AT END): \n";
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}