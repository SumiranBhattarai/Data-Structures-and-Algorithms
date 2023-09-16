#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
void seeintvec(deque<int> vec)
{
    for (auto it : vec)
        cout << it << endl;
}
int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    seeintvec(dq);
    dq.push_front(30);
    dq.push_front(40);
    seeintvec(dq);
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}