// Problem statement: Given an array, we have found the number of occurrences of each element in the array.

#include <bits/stdc++.h>
using namespace std;

// Solution 1: Use of two loops

// Intuition: We can simply use two loops, in which the first loop points to one element and the second loop finds that element in the remaining array. We will keep track of the occurrence of that same element by maintaining a count variable. We also have to maintain a visited array so that it will keep track of the duplicate elements that we already count.

// Approach:

// Make a visited array of type boolean.
// Use the first loop to point to an element of the array.
// Initialize the variable count to 1.
// Make that index true in the visited array.
// Run second loop, if we find the element then mark the visited index true and increase the count.
// If the visited index is already true then skip the other steps.

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        //  Skip this element if already processed
        if (visited[i] == true)
            continue;

        // count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " = " << count << endl;
    }
}

// olution 2: Using Map

// Intuition: We can use a map of value and frequency pair, in which we can easily update the frequency of an element if it is already present in the map, if it is not present in the map then insert it in the map with frequency as 1. After completing all the iterations, print the value frequency pair.

// Approach:

// Take a unordered_map/HashMap of <Integer , Integer> pair.
// Use a for loop to iterate the array.
// If the element is not present in the map then insert it with frequency 1, otherwise increase the existing frequency by 1.
// Print the value frequency pair.

void countFreq2(int arr[], int n)
{
    unordered_map<int, int> count;

    for (int i = 0; i < n; i++)
    {
        int currElement = arr[i];
        count[currElement]++;
    }

    for (auto i : count)
        cout << i.first << " = " << i.second << endl;
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(int);
    countFreq2(arr, n);
    return 0;
}