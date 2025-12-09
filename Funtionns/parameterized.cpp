#include <iostream>
using namespace std;

//if we don't want to return value then we can use void
void addition(int num1,int num2)
{
    cout<<"Addition of two number is "<<(num1+num2)<<endl;
}

//if we want to retrun value then we have to use int type
int subtraction(int num1,int num2)
{
    return num1-num2;
}

int main(){
    addition(10,20);
    cout<<"Subtraction of two number is "<<subtraction(30,20)<<endl; //now when we call subtraction return the subtraction ofnum1 and num2 
    return 0;
}