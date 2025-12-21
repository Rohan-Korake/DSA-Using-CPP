#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,5,10,15,20};
    int i=0,j=4,sum=0,target=25;
    while (i<j)
    {
        sum=arr[i]+arr[j];
        if (sum<target)
        {
            i++;
            sum=0;
        }
        else if (sum>target)
        {
            j--;
            sum=0;
        }
        else
        {
            cout<<"Addition of index "<<i<<" "<<j<<" is equal to target sum"<<endl;
            break;        
        }        
    }

   return 0;
}