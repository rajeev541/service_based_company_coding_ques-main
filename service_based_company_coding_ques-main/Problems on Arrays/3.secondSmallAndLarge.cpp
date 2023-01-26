// Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

#include <bits/stdc++.h>
using namespace std;
// Solution 1(Brute Force)
// Approach:
// Sort the array in ascending order
// The element present at the second index is the second smallest element
// The element present at the second index from the end is the second largest element
// Time Complexity: O(NlogN), For sorting the array

void getElement(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl; // when only one element is present

    sort(arr, arr + n);
    int small = arr[1];
    int large = arr[n - 2];
    cout << "smallest number is " << small << endl;
    cout << "Largest number is " << large << endl;
}

// Solution 2(Better Solution)

// Approach:
// Find the smallest and largest element in the array in a single traversal
// After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
// Similarly, we would find the largest element which is just smaller than the largest element we just found
// Indeed, this is our second smallest and second largest element.

void getElement2(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl; // edge case;

    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }

    cout << "second smallest " << second_small << endl;
    cout << "second largest " << second_large << endl;
}

// Solution 3(Best Solution)
// Second Smallest Algo:

// If the current element is smaller than ‘small’, then we update second_small and small variables
// Else if the current element is smaller than ‘second_small’ then we update the variable ‘second_small’
// Once we traverse the entire array, we would find the second smallest element in the variable second_small.
// Here’s a quick demonstration of the same.

// Second Largest Algo:
// If the current element is larger than ‘large’ then update second_large and large variables
// Else if the current element is larger than ‘second_large’ then we update the variable second_large.
// Once we traverse the entire array, we would find the second largest element in the variable second_large.
// Here’s a quick demonstration of the same.

int secondSmallest(int arr[], int n)
{
    if (n < 2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }
    return second_small;
}
int secondLargest(int arr[], int n)
{
    if (n < 2)
        return -1;
    int large = INT_MIN, second_large = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }

        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }
    return second_large;
}

int main()
{
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr)/sizeof(int);
    return 0;
}