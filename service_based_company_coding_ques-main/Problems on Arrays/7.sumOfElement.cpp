
#include <bits/stdc++.h>
using namespace std;

// Solution 1: Using for loop

// Approach:

// Using for loop traverse through the array and while traversing  maintain  a variable for storing sum of the elements in the array.
// After completing the traversal simply print the sum.
// Time Complexity: O(n)
int calculateSumOfArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];
    return sum;
}

// Solution 2: Using collection in Java or STL in C++

// Approach:

// For C++: “accumulate” is used to calculate the sum of all the elements in the array.


// Time Complexity: O(n).

// Space Complexity: O(1).
void calculateSumOfArray2(int arr[], int n)
{
    int sum = 0;
    cout << accumulate(arr, arr + n, sum);
}

int main()
{
    int arr[] = {8, 7, 1, 6, 5, 9};
    int n = sizeof(arr) / sizeof(int);

    calculateSumOfArray2(arr,n);

    return 0;
}