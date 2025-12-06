#include <iostream>
using namespace std;

int main(){
    int count=4;
    for (int i = 0; i < count; i++)
    {
        char ch='A';

        //sapce loop
        for(int j=0;j<count-i-1;j++)
        {
            cout<<"  ";
        }

        //left side char loop
        for(int k=1;k<=i+1;k++)
        {
            cout<<ch<<" ";
            ch+=1;
        }

        ch='A'+i-1;
        //right side char loop
        for (int l = i; l > 0; l--)
        {
            cout<<ch<<" ";
            ch-=1;
        }
        cout<<endl;
    }
    return 0;
}