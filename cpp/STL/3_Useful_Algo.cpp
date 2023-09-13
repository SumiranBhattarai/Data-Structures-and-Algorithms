#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> box = arr;

    cout << "\nSORTING";
    sort(box.begin(), box.end());
    for (auto it : box)
        cout << it << endl;

    cout << "\nSORTING asc";
    sort(box.begin(), box.end(), greater<int>());
    for (auto it : box)
        cout << it << endl;

    cout << "\nREVERSE";
    reverse(box.begin(), box.end());
    for (auto it : box)
        cout << it << endl;

    cout << "\nMAX: " << *max_element(box.begin(), box.end());
    cout << "\nMIN: " << *min_element(box.begin(), box.end());
    cout << "\nSUM: " << accumulate(box.begin(), box.end(), 0);
    cout << "\nCOUNT 2 in array: " << count(box.begin(), box.end(), 2);
    find(box.begin(), box.end(), 2) != box.end() ? cout << "\nFOUND" : cout << "\nNOT FOUND";
    box.erase(find(box.begin(), box.end(), 3));
    cout << "\nERASED: ";
    for (auto it : box)
        cout << it << endl;

    box = {1, 2, 3, 4, 5, 6, 6, 6, 6, 7, 8, 8, 8, 9};

    box.erase(unique(box.begin(), box.end()), box.end());
    cout << "\nERASED UNIQUE: ";
    for (auto it : box)
        cout
            << it << endl;

    cout << "\nNEXT PERMUTATION: ";
    for (auto i : box)
        next_permutation(box.begin(), box.end());
    for (auto it : box)
        cout << it << endl;

    cout << "\nDISTANCE: " << distance(box.begin(), max_element(box.begin(), box.end()));
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;

    return 0;
}