
#include <bits/stdc++.h>
using namespace std;

//  TIME COMP : O(N2)
//  SPACE COMP : O(N) -> for storing repeated element.
void findRepeatingElement(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                    ans.push_back(arr[i]);
            }
        }
    }

    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}

//  TIME COMP : O(NLOGN)
//  SPACE COMP : O(N) -> for storing repeated element.
void findRepeatingElement2(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    vector<int> ans;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
            ans.push_back(arr[i]);
    }

    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}

//  TIME COMP : O(N)
//  SPACE COMP : O(N)
void findRepeatingElement3(vector<int> arr)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        mp[element]++;
    }

    for (auto i : mp)
    {
        if (i.second > 1)
            cout << i.first << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 4, 4, 5};
    findRepeatingElement3(arr);
    return 0;
}