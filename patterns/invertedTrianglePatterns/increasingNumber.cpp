#include <iostream>
using namespace std;

int main(){
    int count=4;
    int num=0;
    for (int i = 0; i < count; i++)
    {
        //sapce loop
        for (int j = 0; j < i; j++)
        {
            cout<<"  "; 
        }
        
        //num loop
        for (int k = 0; k < count-i; k++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}