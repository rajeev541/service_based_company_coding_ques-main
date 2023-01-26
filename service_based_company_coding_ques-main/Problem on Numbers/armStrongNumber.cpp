#include<iostream>
using namespace std;

bool armStrong(int num)
{
    int temp = num;
    int sum = 0;
    
    while(temp > 0){
        int rem = temp%10;
        sum = sum + (rem*rem*rem);
        temp = temp/10;
    }
    if(sum == num)
        return true;
    return false;
}

int main()
{
    int num = 153;
   if(armStrong(num))
    cout<<"It is arm strong number";
    else
        cout<<"Not a arm strong number";
    return 0;
}