#include <iostream>
using namespace std;

// Node structure for the linked list
class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Dynamic Queue implementation using a singly linked list
class queue
{
private:
    node *front;
    node *rear;

public:
    queue()
    {
        front = rear = NULL;
    }
// Returns 1 if queue is empty, 0 otherwise
    int empty(void)
    {
        if (front == NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

// Returns the front element without removing it
    int peek(void)
    {
        if (empty())
        {
            cout << "\nQueue is empty";
            return -1;
        }

        return front->data;
    }

// Inserts a new node at the rear
    void enqueue(int x)
    {
        node *p = new node(x);

        if (front == NULL)
        {
            front = p;
            rear = p;
        }
        else
        {
            rear->next = p;
            rear = p;
        }
    }

// Removes and returns the front node's data
    int dequeue(void)
    {
        if (empty())
        {
            cout << "\nQueue is empty";
            return -1;
        }

        int x = front->data;
        node *p = front;

        front = front->next;
// If queue becomes empty, reset rear pointer
        if (front == NULL)
        {
            rear = NULL;
        }

        delete p;

        return x;
    }
// Traverses and prints all queue elements
    void display(void)
    {
        node *q = front;

        cout << "\nQueue elements: ";

        while (q != NULL)
        {
            cout << "\t" << q->data;
            q = q->next;
        }
    }
};

int main()
{
    int x;
    queue q;

    q.enqueue(27);
    q.enqueue(34);
    q.enqueue(42);
    q.enqueue(58);
    q.enqueue(65);
    q.enqueue(70);

    q.display();

    if (!q.empty())
    {
        x = q.dequeue();
        cout << "\nRemoved: " << x;
    }

    q.display();

    x = q.peek();
    cout << "\nFront element is: " << x;

    return 0;
}


//PS C:\Payal 32399.c> cd "c:\Payal 3239.c\" ; if ($?) { g++ queue_using_linkedlist.cpp -o queue_using_linkedlist } ; if ($?) { .\queue_using_linkedlist }

//Queue elements:         27      34      42      58      65      70
//Removed: 27
//Queue elements:         34      42      58      65      70
//Front element is: 34
