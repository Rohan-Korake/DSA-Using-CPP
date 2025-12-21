#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,1,2,1};

    for (int i = 0; i < 5; i++)
    {
       int counter=0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i]==arr[j])
            {
                counter++;
            }
        }
        if (counter>(5/2))
        {
            cout<<"majority element is "<<arr[i]<<endl;
            break;
        }
   }
    
   return 0;
}