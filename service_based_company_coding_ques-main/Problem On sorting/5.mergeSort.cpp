
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int leftLength = mid - s + 1; // Getting left length of array
    int rightLength = e - mid;    // Getting right length of array

    int *leftArr = new int[leftLength];   // Creating left array to store element
    int *rightArr = new int[rightLength]; // Creating right side array to store element

    int original = s;

    // store the value in left array
    for (int i = 0; i < leftLength; i++)
        leftArr[i] = arr[original++];

    original = mid + 1;
    // store the value in right array
    for (int i = 0; i < rightLength; i++)
        rightArr[i] = arr[original++];

    original = s;
    int leftIndex = 0;
    int rightIndex = 0;

    /*
        compare left side and right side element
        if
            leftmost element is smaller then assign to it in original array
        else
            assign to it right element in original array

    */

    while (leftIndex < leftLength && rightIndex < rightLength)
    {
        if (leftArr[leftIndex] <= rightArr[rightIndex])
            arr[original++] = leftArr[leftIndex++];
        else
            arr[original++] = rightArr[rightIndex++];
    }

    // storing remaining element
    while (leftIndex < leftLength)
        arr[original++] = leftArr[leftIndex++];

    // storing remaining element
    while (rightIndex < rightLength)
        arr[original++] = rightArr[rightIndex++];
}

void mergeSort(int arr[], int s, int e)
{
    // Dividing array
    if (s < e)
    {
        int mid = s + (e - s) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, e);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    // int arr[] = {3, 4, 1, 5, 7, 10};
    int arr[] = {13, 4, 11, 45, 7, 110};
    int size = sizeof(arr) / sizeof(int);
    print(arr, size);
    mergeSort(arr, 0, size - 1);
    cout << "After sorting " << endl;
    print(arr, size);

    return 0;
}