// Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order
// Input: 8 7 1 6 5 9
// Output: 1 5 6 9 8 7

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Intuition: Sort the whole array. Then print the first half of the array to get the first half in the ascending order and then print the rest of the array in the reverse order.

// Time Complexity: O(nlogn) +O(n).O(nlogn) for sorting the array and O(n) for printing the elements. 

// Space Complexity: O(1).
void rearrange(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n / 2; i++)
        cout << arr[i] << " ";

    for (int i = n - 1; i >= n / 2; i--)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {8, 7, 1, 6, 5, 9};
    int n = sizeof(arr) / sizeof(int);

    rearrange(arr, n);
    return 0;
}