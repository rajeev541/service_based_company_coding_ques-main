#include<iostream>
using namespace std;

bool checkPrime(int num)
{
    if(num==1)
        return false;
        
    for(int i = 2;i<num;i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

void primeRange(int a,int b)
{
    for(int i = a;i<=b;i++)
    {
        if(checkPrime(i))
            cout<<i<<" ";
    }
}

int main()
{
    int a = 10;
    int b = 30;
    
   primeRange(a,b);
    return 0;
}