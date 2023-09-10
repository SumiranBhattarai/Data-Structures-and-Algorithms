#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

class Node
{
private:
    Node *head;
    Node *next;
    int data;

public:
    Node()
    {
        head = NULL;
    }
    void insert(int data)
    {
        Node *new_node = new Node;
        new_node->data = data;
        new_node->next = NULL;
        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = new_node;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    // TIME START
    auto start_time = high_resolution_clock::now();
    auto end_time = high_resolution_clock::now();

    // Code
    Node node;
    node.insert(1);
    node.insert(2);
    node.insert(3);
    node.display();
    // TIME END
    auto duration = duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Execution Time: " << duration.count() << " milliseconds" << endl;
    return 0;
}