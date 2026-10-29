#include <iostream>
using namespace std;

// Maximum capacity of the array-based queue
const int MAX = 5;

/**
 * @brief Linear Queue implementation using a fixed-size array.
 */
class queue
{
private:
    int a[MAX];
    int front;
    int rear;

// Constructor: Initializes an empty queue by setting front and rear to -1
public:
    queue()
    {
        front = -1;
        rear = -1;
    }

// Checks if the queue is empty (returns 1 if empty, 0 otherwise)
    int empty(void)
    {
        if (front == -1 && rear == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

// Checks if the queue has reached maximum capacity (returns 1 if full, 0 otherwise)
    int full(void)
    {
        if (rear == MAX - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

// Inserts a new element at the rear of the queue
    void enqueue(int x)
    {
        if (full())
        {
            cout << "\nQueue is full";
            return;
        }

        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }

        a[rear] = x;
    }

// Removes and returns the element from the front of the queue
    int dequeue(void)
    {
        if (empty())
        {
            cout << "\nQueue is empty";
            return -1;
        }

        int x = a[front];

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }

        return x;
    }

// Returns the front element without removing it
    int peek(void)
    {
        if (empty())
        {
            cout << "\nQueue is empty";
            return -1;
        }

        return a[front];
    }

// Prints all active elements in the queue from front to rear
    void display(void)
    {
        if (empty())
        {
            cout << "\nQueue is empty";
            return;
        }

        cout << "\nQueue elements:";
        for (int i = front; i <= rear; i++)
        {
            cout << "\t" << a[i];
        }
    }
};

int main()
{
    int x;
    queue q;

    q.enqueue(25);
    q.enqueue(57);
    q.enqueue(25);
    q.enqueue(82);
    q.enqueue(99);

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


//PS C:\Payal 3239.c> cd "c:\Payal 3239.c\" ; if ($?) { g++ queue_using_array.cpp -o queue_using_array } ; if ($?) { .\queue_using_array }

//Queue elements: 25      57      25      82      99
//Removed: 25
//Queue elements: 57      25      82      99
//Front element is: 57
//PS C:\Payal 3239.c> 
