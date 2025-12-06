#include<iostream>
using namespace std;

int main(){
    int count=3;
    int num=1;
    for(int i=1;i<=count;i++)
    {
       for(int j=1;j<=3;j++)
       {
        cout<<num<<" ";
        num++;
       }
        cout<<endl;
    }
    return 0;
}