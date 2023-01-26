
// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseString(string &s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start <= end)
    {
        swap(s[start++], s[end--]);
    }
    return s;
}

int main()
{
    string s = "mohd shuaib";

    cout << reverseString(s);

    return 0;
}