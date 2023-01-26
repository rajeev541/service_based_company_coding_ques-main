#include<iostream>
using namespace std;

int main()
{
    int num = 13;
    int i;
    for( i = 2;i<num;i++)
    {
        if(num%i==0)
            break;
    }
    if(i == num)
        cout<<"it is prime number";
    else
        cout<<"not a prime number";
    return 0;
}