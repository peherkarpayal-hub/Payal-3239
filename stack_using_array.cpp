#include <iostream>
using namespace std;

const int MAX = 5;

// Stack implementation using a fixed-size array
class Stack
{
private:
    int a[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

// Inserts an element onto the top of the stack
    void push(int x)
    {
        top++;
        a[top] = x;
    }

// Removes and returns the top element
    int pop(void)
    {
        int x = a[top];
        top--;
        return x;
    }

// Returns the top element without removing it
    int peek(void)
    {
        return a[top];
    }

// Returns 1 if stack is full, 0 otherwise
    int full(void)
    {
        if (top == MAX - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

// Returns 1 if stack is empty, 0 otherwis
    int empty(void)
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

// Prints stack elements from top to bottom (LIFO order)
    void display(void)
    {
        for (int i = top; i >= 0; i--)
        {
            cout << endl << a[i];
        }
    }
};

int main()
{
    int x;
    Stack s;

    if (!s.full()) s.push(12);
    if (!s.full()) s.push(34);
    if (!s.full()) s.push(56);
    if (!s.full()) s.push(87);
    if (!s.full()) s.push(92);
    if (!s.full()) s.push(99);

    cout << "Stack elements:";
    s.display();

    if (!s.empty())
    {
        x = s.pop();
        cout << endl << "Removed: " << x;
    }

    cout << endl << "Stack after pop:";
    s.display();

    if (!s.empty())
    {
        x = s.peek();
        cout << endl << "Top element is: " << x;
    }

    return 0;
}


//PS D:\Payal 3239> cd "d:\Payal 3239\" ; if ($?) { g++ stack_using_array.cpp -o stack_using_array } ; if ($?) { .\stack_using_array }
//Stack elements:
//92
//87
//56
//34
//12
//Removed: 92
//Stack after pop:
//87
//56
//34
//12
//Top element is: 87
//PS D:\Payal> 
