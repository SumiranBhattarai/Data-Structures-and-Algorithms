#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Stack
{
    int top;
    int max;
    vector<int> stack;

public:
    Stack(int max)
    {
        top = -1;
        this->max = max;
        stack.resize(max);
    }
    void push(int num)
    {
        if (top == max - 1)
        {
            cout << "Stack is Full" << '\n';
        }
        else
        {
            stack[++top] = num;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << '\n';
            cout << "Stack is Empty" << '\n';
        }
        else
        {
            cout << '\n';
            cout << "removed element" << stack[top] << '\n';
            top--;
        }
    }
    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << ' ';
        }
        cout << endl;
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Stack obj(5);
    obj.push(1);
    obj.push(2);
    obj.push(1);
    obj.push(2);
    obj.pop();
    obj.display();
    obj.pop();
    obj.pop();
    obj.pop();
    obj.pop();

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}