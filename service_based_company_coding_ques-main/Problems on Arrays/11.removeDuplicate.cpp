#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Solution 1: Brute Force

// Intuition: We have to think of a data structure that does not store duplicate elements. So can we use a Hash set? Yes! We can. As we know HashSet only stores unique elements.

// Approach:

// Declare a HashSet.
// Run a for loop from starting to the end.
// Put every element of the array in the set.
// Store size of the set in a variable K.
// Now put all elements of the set in the array from the starting of the array.
// Return K.
// Time complexity: O(n*log(n))+O(n)

// Space Complexity: O(n)
void removeDuplicate(vector<int> arr)
{
    set<int> st;

    for (auto x : arr)
    {
        st.insert(x);
    }

    for (auto i : st)
    {
        cout << i << " ";
    }
}

// Solution 2: Two pointers

// Intuition: We can think of using two pointers ‘i’ and ‘j’, we move ‘j’ till we don’t get a number arr[j] which is different from arr[i]. As we got a unique number we will increase the i pointer and update its value by arr[j].

// Approach:

// Take a variable i as 0;
// Use a for loop by using a variable ‘j’ from 1 to length of the array.
// If arr[j] != arr[i], increase ‘i’ and update arr[i] == arr[j].
//  After completion of the loop return i+1, i.e size of the array of unique elements.

int removeDuplicate2(int arr1[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr1[i] != arr1[j])
        {
            i++;
            arr1[i] = arr1[j];
        }
    }
    return i + 1;
}

void print(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3};
    int arr1[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << endl;
    // removeDuplicate(arr);

    int k = removeDuplicate2(arr1, n);
    for (int i = 0; i < k; i++)
        cout << arr1[i] << " ";

    return 0;
}