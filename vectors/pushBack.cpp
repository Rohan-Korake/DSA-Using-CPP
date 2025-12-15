#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vect;

    cout<<"Size of vector : "<<vect.size()<<endl;
    vect.push_back(10);
    vect.push_back(20);
    cout<<"Size of vector after push back : "<<vect.size()<<endl;

    for(int var : vect)
    {
        cout<<var<< " ";
    }
    cout<<endl;
    
   return 0;
}