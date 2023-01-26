
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool canPair(vector<int> nums, int k)
{
    // Code here.

    int n = nums.size();

    if (n & 1)
        return false;

    vector<bool> vis(n, false);
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int temp = nums[i] + nums[j];
            if ((temp % k == 0) && vis[i] == false && vis[j] == false)
            {
                count++;
                vis[i] = true;
                vis[j] = true;
            }
        }
    }
    if (count == n / 2)
        return true;
    return false;
}

int main()
{
    vector<int> arr{9, 5, 7, 3};
    int k = 6;
    int n = sizeof(arr) / sizeof(int);

    cout<<canPair(arr, k);
}
