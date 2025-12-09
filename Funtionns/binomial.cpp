#include <iostream>
using namespace std;

int factorial(int num)
{
    if(num<0 || num ==1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main(){
    int n,r,nCr;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    nCr=factorial(n)/(factorial(r)*(factorial(n-r)));
    cout<<"Binomial coefficient is "<<nCr<<endl;
    return 0; 
}