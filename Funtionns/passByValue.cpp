#include <iostream>
using namespace std;

int copyFuntion(int x)
{
    return x * x;
}

int main(){
    int num=4;
    cout<<"Square of 4 using pass by value is "<<copyFuntion(num)<<endl;
    return 0;
}