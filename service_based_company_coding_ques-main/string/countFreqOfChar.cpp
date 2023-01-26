
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "mohdshuaib";
    sort(s.begin(), s.end());
    int count = 1;
    char ch = s[0];

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == ch)
            count++;
        else
        {
            cout << ch << "-> " << count;
            count = 1;
            ch = s[i];
        }
        cout << endl;
    }

    return 0;
}