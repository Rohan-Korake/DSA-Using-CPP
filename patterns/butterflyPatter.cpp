#include <iostream>
using namespace std;

int main(){
    int count=4;

    //top part 
    for (int i = 0; i < count; i++)
    {
        //top left stars
       for(int j=0;j<i+1;j++)
       {
        cout<<" * ";
       }

       //middle space 
       for (int k = 0; k < 2*(count-i-1); k++)
       {
        cout<<"   ";
       }
       
       //top right stars
       for(int l=i+1;l>0;l--)
        {
           cout<<" * ";
        }

        cout<<endl;
    }

    //bottom part
    for (int i = 0; i < count; i++)
    {
        //bottom left stars
        for (int j = 0; j < count-i; j++)
        {
            cout<<" * ";
        }

        //middle space 
        for (int k = 0; k <2*i; k++)
        {
            cout<<"   ";
        }
        
        //bottom right stars
        for (int l = count-i; l >0; l--)
        {
            cout<<" * ";
        }
        
        cout<<endl;
    }
    
    return 0;
}