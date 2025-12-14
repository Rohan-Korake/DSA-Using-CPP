#include <iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40,50,20,90,50,60,100};
    int uniqueArr[10],uniqueVal=0,ptr=0,counter=0;

    cout<<"Array values : ";
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
        counter=0;
        for (int j = 0; j < 10; j++)
        {
            if (i != j && arr[i]==arr[j])
            {
                counter++;
            }   
        }
        if (counter==0)
        {
           uniqueArr[ptr]=arr[i];
           ptr++;
        }
    }

    cout<<"\nunique values : ";
    for (int i = 0; i < ptr; i++)
    {
        cout<<uniqueArr[i]<<" ";
    }
    cout<<endl;

   return 0;
}