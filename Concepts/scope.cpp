#include <iostream>
using namespace std;

int main(){
    int globalVar=10;

    if(true)
    {
        int localVar=20;
        cout<<"value of local vaiable inside the scope "<<localVar<<endl;
        cout<<"value of global variable inside the local scope "<<globalVar<<endl;

    }
    cout<<"value of global variable is "<<globalVar<<endl;
    // cout<<"value of local vaiable outside the scope "<<localVar<<endl; //this line shows error because localVar is the local variable not accessible outside the scope

   return 0;
}