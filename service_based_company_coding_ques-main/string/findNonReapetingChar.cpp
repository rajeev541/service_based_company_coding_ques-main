
#include<bits/stdc++.h>
using namespace std;

char nonRepeatingChar(string s)
{
    bool istrue = false;
    for(int i = 0;i<s.size();i++)
    {
        for(int j = i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                istrue = true;
            }
        }
        if(istrue == false)
            return s[i];
        istrue = false; 
    }
    return '$';
}

int main()
{
    string s = "zxvczbtxyzvy";

    cout<<nonRepeatingChar(s);
    return 0;
}