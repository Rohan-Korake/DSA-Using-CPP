#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vect={10,20,30,40,50};
    cout<<"Vector value at 0 : "<<vect.at(0)<<endl;
    cout<<"Vector value at 1 : "<<vect.at(1)<<endl;
    cout<<"Vector value at 4 : "<<vect.at(4)<<endl;

   return 0;
}