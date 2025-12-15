#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vect={10,20,30,40,50};
    cout<<"Size of vector : "<<vect.size()<<endl;
    vect.pop_back();
    vect.pop_back();
    cout<<"Size of vector after pop back : "<<vect.size()<<endl;

    for(int var : vect)
    {
        cout<<var<< " ";
    }
    cout<<endl;
    
   return 0;
}