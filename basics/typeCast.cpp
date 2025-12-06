#include<iostream>
using namespace std;

int main(){
// implicit typecasting
    char grade='R';
    int var=grade;
    cout<<"Implicit Typecasting char to int : "<<var<<endl;//this will print the ASCII value of capital "R"

//Explicit typecasting
    double num=1100.22;
    int value=(int)num;
    cout<<"Explicit typecasting double to int : "<<value<<endl;//this will print the double num value into integer value 
    return 0;
}