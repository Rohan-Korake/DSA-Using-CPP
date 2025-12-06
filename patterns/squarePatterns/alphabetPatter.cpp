#include<iostream>
using namespace std;

int main(){
    int count=5;
   for (int i = 0; i < count; i++)
   {
    char ch='A';
    for (int j = 0; j < count; j++)
    {
        cout<< ch<<" ";
        ch+=1;
    }
    cout<<endl;
   }
   
    return 0;
}