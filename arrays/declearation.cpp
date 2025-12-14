#include <iostream>
using namespace std;

int main(){
    int arr1[5]; //method 1
    int arr2[5]={10,20,30,40,50}; //Method 2
    int arr3[]={10,20,30,40,50}; //Method 3

    //Assign values to the array
    arr1[0]=100;
    arr1[1]=200;
    arr1[2]=300;
    arr1[3]=400;
    arr1[4]=500;
    

    //Display the values of array
    for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

   return 0;
}