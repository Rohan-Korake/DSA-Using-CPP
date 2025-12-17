#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0,maxSum=0;

    for (int start = 0; start < 5; start++)
    {
        sum=0;
        for (int end = start; end < 5; end++)
        {
           sum+=arr[end];
            maxSum=max(sum,maxSum);
        }
    }
    
    cout<<"maximum sum of subarray is "<<maxSum<<endl;
   return 0;
}