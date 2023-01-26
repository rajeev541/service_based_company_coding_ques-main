
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void print(vector<int> arr)
{
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> arr{7, 2, 91, 77, 3};
    // // int arr[] = {7, 2, 91, 77, 3};
    // int n = sizeof(arr) / sizeof(int);
    print(arr);
    insertionSort(arr);
    print(arr);
    return 0;
}