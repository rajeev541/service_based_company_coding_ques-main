
#include <bits/stdc++.h>
using namespace std;

int averageOfElement(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int avg = sum / n;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    cout << "Average of element " << averageOfElement(arr, n);
    return 0;
}