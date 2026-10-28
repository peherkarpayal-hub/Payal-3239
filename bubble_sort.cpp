#include <iostream>
using namespace std;

void bubble_sort(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1]) 
        {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        }
    }
    }
}

int main() {
    int n;
    int a[10]; 
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " integers in any order: " << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    bubble_sort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

//S C:\payal 3239.c> cd "c:\Payal 3239.c\" ; if ($?) { g++ bubble_sort.cpp -o bubble_sort } ; if ($?) { .\bubble_sort }
//Enter the size of the array: 5
//Enter 5 integers in any order: 
//64 72 85 13 45
//Sorted array: 13 45 64 72 85 
