#include <iostream>
using namespace std;

void fibonacci(int term)
{
    int num1=0,num2=1;
    int fibo=0;
    cout<<num1<<" "<<num2<<" ";
    for (int i = 0; i < term; i++)
    {
        fibo=num1+num2;
        num1=num2;
        num2=fibo;
        cout<< fibo <<" ";
    }
    cout<<endl;
}

int main(){
    fibonacci(10);
    return 0;
}