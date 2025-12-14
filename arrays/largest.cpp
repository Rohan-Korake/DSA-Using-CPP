#include <iostream>
using namespace std;

int main(){
    int arr[4],largest=INT_MIN;//INT_MIN means smallest integer value

    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter the value for array of index "<<i<<" : ";
        cin>>arr[i];
        if (largest<arr[i])
        {
            largest=arr[i];
        }
    }
    
    cout<<"Largest number form array is : "<<largest<<endl;

   return 0;
}