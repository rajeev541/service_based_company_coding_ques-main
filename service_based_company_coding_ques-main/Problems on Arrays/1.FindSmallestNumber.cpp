// Problem Statement: Given an array, we have to find the smallest element in the array.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// SOLUTION 1 :
/*
    1.SORT THE ARRAY IN ASSENDING ORDER
    2. RETURN 0TH INDEX ELEMENT.
    3.TIME COMP : O(NLOGN)
*/

int findSmallEle(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[0];
}



// SOLUTION 1 :
/*
    1.USING MIN VARIABLE
    2.Traverse the loop 
    3.If any element is less than the min value, update min value with element’s value
    4.TIME COMP : O(N)
*/

int findSmallestElement(int arr[],int n){

    int min = arr[0];

    for(int i = 1;i<n;i++){
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr) / sizeof(int);

    // cout << "smallest value is " << findSmallEle(arr, n);
    cout << "smallest value is " << findSmallestElement(arr, n);
    return 0;
}