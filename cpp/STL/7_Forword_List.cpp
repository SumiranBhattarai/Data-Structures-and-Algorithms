#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    forward_list<int> fl;
    cout << "ASSIGN" << endl;
    fl.assign({1, 2, 3, 4});
    for (auto it : fl)
    {
        cout << it << endl;
    }
    cout << "\nINSERT_AFTER" << endl;
    auto ptr = fl.insert_after(fl.begin(), {10, 20});
    fl.emplace_after(fl.begin(), 30);
    for (auto it : fl)
    {
        cout << it << endl;
    }
    cout << "\nERASE AFTER" << endl;
    fl.erase_after(ptr, fl.end());
    for (auto it : fl)
    {
        cout << it << endl;
    }
    // TIME
    cout << "\nREMOVE: " << endl;
    fl.remove(1);
    for (auto it : fl)
    {
        cout << it << endl;
    }
    cout << "\nREMOVE_IF:greater than 20 " << endl;
    fl.remove_if([](int x)
                 { return x > 20; });
    for (auto it : fl)
    {
        cout << it << endl;
    }
    cout << "\nSPLICE (Shifting from first to second)" << endl;
    forward_list<int> flist1 = {10, 20, 30};

    forward_list<int> flist2 = {40, 50, 60};

    flist2.splice_after(flist2.begin(), flist1);

    for (auto it : flist2)
    {
        cout << it << endl;
    }
    cout << "\nHAS REVERSE, SORT,UNIQUE";
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}