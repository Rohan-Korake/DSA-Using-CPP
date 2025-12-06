#include <iostream>
using namespace std;

int main(){
    int count=4;
    char ch='A';

    for (int i = 0; i < count; i++)
    {
        //space loop
        for (int j = 0; j < i; j++)
        {
            cout<< "  ";
        }
        
        //char loop
        for(int k=0;k<count-i;k++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
        ch+=1;
    }
    return 0;
}