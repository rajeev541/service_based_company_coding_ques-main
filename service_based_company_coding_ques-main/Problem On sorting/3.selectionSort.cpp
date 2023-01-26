
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int indexOfMin = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[indexOfMin])
                indexOfMin = j;
        }
        swap(arr[indexOfMin], arr[i]);
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
    selectionSort(arr);
    cout << "After sorting" << endl;
    print(arr);
    return 0;
}