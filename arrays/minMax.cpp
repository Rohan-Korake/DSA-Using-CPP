#include <iostream>
using namespace std;

int main(){
    int arr[4],smallest=INT_MAX,largest=INT_MIN;

    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter the value for array of index "<<i<<" : ";
        cin>>arr[i];
        
        smallest=min(arr[i],smallest);
        largest=max(arr[i],largest);
    }

    cout<<"Smallest number :"<<smallest<<endl;
    cout<<"largest number : "<<largest<<endl;

   return 0;
}