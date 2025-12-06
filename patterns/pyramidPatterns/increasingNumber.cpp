#include <iostream>
using namespace std;

int main(){
    int count=4;
    int num=1;
    for (int i = 0; i < count; i++)
    {
       //space loop
       for (int j = 0; j <  count-i-1; j++)
       {
            cout<< "  ";
       }

       //left side num loop
       for (int k = 1; k <= i+1; k++)
       {
         cout<<k<<" ";
       }

       //right side num loop
       for (int l = i; l >0; l--)
       {
            cout<<l<<" ";
       }
       cout<<endl;
    }
    return 0;
}