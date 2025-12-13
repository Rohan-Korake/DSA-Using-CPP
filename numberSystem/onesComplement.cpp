#include <iostream>
using namespace std;

int main(){
    int decNum=0,rem=0;
    string binNum="";

    cout<<"Enter the decimal number : ";
    cin>>decNum;

    //convert number into binary 
    while (decNum > 0)
    {
        rem=decNum%2;
        binNum=char(rem + '0')+binNum;
        decNum/=2;
    }
    
    cout<<"Binary number is : "<<binNum<<endl;

    // calculate 1's complement
    for (int i = 0; i < binNum.length(); i++)
    {
        if(binNum[i]=='0')
        {
            binNum[i]='1';
        }
        else if(binNum[i]=='1')
        {
            binNum[i]='0';
        }
    }
    
    cout<<"One's Complement : "<<binNum<<endl;
   return 0;
}