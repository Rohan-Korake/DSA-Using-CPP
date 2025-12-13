#include <iostream>
using namespace std;

int main()
{
    int decNum=0,binNum=0,rem=0,power=1;
    cout<<"Enter the decimal number : ";
    cin>>decNum;

    while (decNum>0)
    {
        rem=decNum%2;
        decNum/=2;
        binNum+=(rem*power);
        power*=10;
    }
    
    cout<<"Binary number : "<<binNum<<endl;
  return 0;
}
