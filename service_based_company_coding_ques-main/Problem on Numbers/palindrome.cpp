#include<iostream>
using namespace std;

int main()
{
    int num = 121;
    int temp = num;
    int ans = 0;
    while(num > 0){
        int rem = num % 10;
        ans = (ans*10)+rem;
        num=num/10;
    }
    if(temp == ans)
        cout<<"it is palindrome";
    else
        cout<<"not a palimdrome";
    return 0;
}