#include <iostream>
using namespace std;

int main(){
    int arr[4],smallest=INT_MAX; //INT_MAX means largest integer value

    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter the value for array of index "<<i<<" : ";
        cin>>arr[i];
        if (smallest > arr[i])
        {
            smallest=arr[i];
        }
    }

    cout<<"Smallest number from array is "<<smallest<<endl;

   return 0;
}