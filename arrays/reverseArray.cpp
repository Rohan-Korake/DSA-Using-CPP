#include <iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int start=0,end=9,temp=0;

    for (int i = 0; i < 5; i++)
    {
        if (start!=end)
        {
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

   return 0;
}