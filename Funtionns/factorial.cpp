#include <iostream>
using namespace std;

void factorial(int num)
{
    int fact=1;
    for (int i = 1; i <=num; i++)
    {
        fact*=i;
    }
    cout<<" facotrial of "<<num<<" is "<<fact<<endl;
}

int main(){
    factorial(5);
    return 0;
}