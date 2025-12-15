#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vect={10,20,30,40,50};

    cout<<"Values of vector : ";
   for(int var : vect)
    {
        cout<<var<< " ";
    }
    cout<<endl;

    cout<<"Front value of vector : "<<vect.front()<<endl;
    cout<<"Back value of vector : "<<vect.back()<<endl;

   return 0;
}