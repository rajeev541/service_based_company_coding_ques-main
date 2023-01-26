#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// USING SORT METHOD
//  TIME COMP : O(NLOGN)
//  SPACE COMP : O(1)
void sortArray1(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

// DUTCH FLAG NATION ALGO
// TIME COMP : O(N)
// SPACE COMP : O(1)
// PROB : 2 TIME TRAVERSE
void sortArray2(vector<int> &arr)
{
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (cnt0 > 0)
        {
            arr[i] = 0;
            cnt0--;
        }
        else if (cnt1 > 0)
        {
            arr[i] = 1;
            cnt1--;
        }
        else
        {
            arr[i] = 2;
            cnt2--;
        }
    }
}

// DUTCH FLAG NATION ALGO
// TIME COMP : O(N)
// SPACE COMP : O(1)
void sortArray(vector<int> &arr)
{
    int size = arr.size();
    int mid = 0;
    int low = 0;
    int high = size - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
            swap(arr[mid++], arr[low++]);
        else if (arr[mid] == 1)
            mid++;
        else
            swap(arr[mid], arr[high--]);
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
    vector<int> arr{0, 1, 1, 0, 0, 2, 2, 1, 0, 1};
    // sortArray(arr);
    // sortArray1(arr);
    sortArray2(arr);
    print(arr);
    return 0;
}