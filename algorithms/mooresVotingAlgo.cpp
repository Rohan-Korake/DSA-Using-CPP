#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,1,2,1};
    int ele=0;
    int repeat=0;
    for (int i = 0; i < 5; i++)
    {
        if (repeat==0)
        {
            ele=arr[i];
        }
        
       if (ele==arr[i])
       {
        repeat++;
       }
       else
       {
        repeat--;
       }
    }

    //count the majority element 
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        if (ele==arr[i])
        {
            count++;
        }
    }

    //when no mejority element is present in the array then we have to display -1
    if (count>(5/2))
    {
        cout<<"Majority element form array is "<<ele<<endl;
    }
    else
    {
        cout<<"Majority element form array is -1"<<endl;

    }
    
   return 0;
}