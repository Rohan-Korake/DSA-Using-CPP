#include <iostream>
using namespace std;

int calculateSum(int num)
{
    int lastDigit=0, sum=0;
    while(num > 0)
    {
        lastDigit=num%10;
        num /= 10;
        sum+=lastDigit;
    }
    return sum;
}

int main(){
    int num;
    cout<<"Enter the value of num : ";
    cin>>num;
    cout<<"Sum of Digit is : "<<calculateSum(num)<<endl;
    return 0;
}