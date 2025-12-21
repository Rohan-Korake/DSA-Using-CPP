#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,6,3,9,10};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if((arr[i]+arr[j]==9))
            {
                cout<<"arr["<<i<<"] = { "<<arr[i]<<" } + arr["<<j<<"] = { "<<arr[j]<<" } = 9"<<endl;

            }
        }
    }
    
   return 0;
}