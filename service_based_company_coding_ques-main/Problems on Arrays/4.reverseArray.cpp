

#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Solution 1: Using library function (New Approach)

// Approach: C++ and Java have inbuilt functions to reverse an array.

// For C++:-

// The std::reverse function in C++ is predefined in a header file algorithm.

void reverseArray(int arr[], int n)
{
    reverse(arr, arr + n);
}

// Solution 2: Using an extra array.

// Solution 1: Using 2 pointer approach

void reverseArray2(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }
    print(arr, n);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);

    reverseArray2(arr, n);
    return 0;
}