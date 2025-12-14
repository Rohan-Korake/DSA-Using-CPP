#include <iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,10};

    cout<<"Original array : ";
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Reverse array  : ";
    for (int j = 9; j >=0 ; j--)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    
   return 0;
}