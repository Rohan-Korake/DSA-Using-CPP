#include <iostream>
using namespace std;

int main(){
    int count=4;

    for (int i = 0; i < count; i++)
    {
        // space loop
       for (int j = 0; j < i; j++)
       {
            cout<< "  ";   
       }

       //value loop
       for (int k =0; k<count-i; k++)
       {
            cout<<(i+1)<<" ";
       }
       cout<<endl;
    }
    return 0;
}