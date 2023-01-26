// Problem Statement: Given an array, we have to find the largest element in the array.

#include <bits/stdc++.h>
using namespace std;

// SOLUTION 1 :
/*
    1.SORT THE ARRAY IN ASSENDING ORDER
    2. RETURN N-1TH INDEX ELEMENT.
    3.TIME COMP : O(NLOGN)
*/

int findLargestEle(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[n - 1];
}

// SOLUTION 2 :
/*
    1.USING MAX VARIABLE
    2.Traverse the loop
    3.If any element is greater than the max value, update max value with the element’s value
    4.TIME COMP : O(N)
*/

int findLargestElement(int arr[], int n)
{

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr) / sizeof(int);
    cout << findLargestElement(arr, n);
    return 0;
}