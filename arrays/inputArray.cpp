#include <iostream>
using namespace std;

int main(){
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter the value for array of index "<<i<<" : ";
        cin>>arr[i];
    }
    
    cout<<"Entered array values : ";
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

   return 0;
}