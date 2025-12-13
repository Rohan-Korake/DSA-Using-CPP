#include <iostream>
using namespace std;

int main(){
    int binNum=0,decNum=0,rem=0,power=1;
    cout<<"Enter the binary number : ";
    cin>>binNum;

    while (binNum>0)
    {
        rem=binNum%10;
        decNum+=(rem*power);
        binNum/=10;
        power*=2;
    }
    cout<<"Decimal number : "<<decNum<<endl;
    return 0;
}