#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vect1={1,2,3,4,5};
    vector<int> vect2(4,0); //here 4 means size of vecotr and 0 means value of each place in vector
    
    cout<< vect1[4]<<endl;
    cout<< vect2[0]<<endl;
    cout<< vect2[4]<<endl;
    
   return 0;
}