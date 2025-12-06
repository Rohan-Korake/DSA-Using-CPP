#include<iostream>
using namespace std;

int main()
{
cout <<"  ( 10 < 20 ) "<<( 10 < 50 )<<endl;
cout <<" !( 10 < 20 ) "<<!( 10 < 50 )<<endl;//logical NOT
cout <<" ( 10 < 20) || ( 10 < 20 ) "<<(( 10 < 20 ) || ( 10 > 20 ))<<endl; //Logical OR
cout <<" ( 10 < 20) && ( 10 < 20 ) "<<(( 10 < 20 ) && ( 10 > 20 ))<<endl; //logical AND
return 0;
}