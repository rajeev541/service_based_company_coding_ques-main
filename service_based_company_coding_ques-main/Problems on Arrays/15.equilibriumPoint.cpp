// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int equilibriumPoint(int a[], int n)
{
    if (n == 1)
        return 1;

    // OPTIMIZED SOLUTION
    int leftSum = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    for (int i = 0; i < n; i++)
    {
        sum -= a[i];

        if (leftSum == sum)
            return i + 1;

        leftSum += a[i];
    }
    return -1;

    // BRUTE fORCE
    /*
    int leftSum;
    int rightSum;
    for(int i = 0;i<n;i++)
    {
        leftSum = 0;
        for(int j = 0;j<i;j++)
            leftSum+=a[j];

        rightSum=0;
        for(int j = i+1;j<n;j++)
            rightSum+=a[j];

        if(leftSum == rightSum)
            return i+1;
    }
    return -1;

    */
}

int main()
{
    // Write C++ code here
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << equilibriumPoint(arr, n);

    return 0;
}