#include<iostream>
using namespace std;

int main(){
int num=10;

//increment operator 
cout<<"num    : "<<num<<endl;
cout<<"num ++ : "<<num++<<endl; //post increment 
cout<<"num    : "<<num<<endl;
cout<<"++ num : "<<++num<<endl; //pre increment 
cout<<"num    : "<<num<<endl;

//dcrement operator 
cout<<"num -- : "<<num--<<endl; //post increment 
cout<<"num    : "<<num<<endl;
cout<<"-- num : "<<--num<<endl; //pre increment 
cout<<"num    : "<<num<<endl;
return 0;
}