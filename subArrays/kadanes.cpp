#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0,maxSum=INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
        maxSum=max(sum,maxSum);    

        //kadane's algorithm says when the sum is negative then reset it to the zero
        if (sum<0)
        {
            sum=0;
        }
    }
    cout<<"Sum of Maximun subarray using kadane's algorithm : "<< maxSum<<endl;
    
   return 0;
}