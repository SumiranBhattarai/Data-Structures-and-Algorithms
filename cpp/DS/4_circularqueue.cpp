#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Queue
{
private:
    vector<int> queue;
    int front, rear;
    int max;

public:
    Queue(int max)
    {
        queue.resize(max);
        this->max = max;
        front = -1;
        rear = -1;
    }
    void enqueue(int num)
    {
        if ((rear + 1) % max == front)
        {
            cout << "\nOverflow";
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            rear = (rear + 1) % max;
            queue[rear] = num;
        }
    }
    void dequeue()
    {
        if (front == -1)
        {
            cout << "\nUnderflow";
        }
        else
        {
            cout << "\nElement out: " << queue[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1) % max;
            }
        }
    }
    void display()
    {
        if (front == -1)
        {
            cout << "\nQueue is empty.";
        }
        else
        {
            int i = front;
            while (true)
            {
                cout << queue[i] << ' ';
                if (i == rear)
                    break;
                i = (i + 1) % max;
            }
        }
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Queue q(3);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4); // Circular queue handles overflow gracefully
    q.display();
    q.dequeue();
    q.enqueue(4);
    q.display();

    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}
