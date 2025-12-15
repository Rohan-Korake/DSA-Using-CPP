#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> charVect={'R','O','H','A','N'};

    for(char ch : charVect)
    {
        cout<<ch<<" ";
    }
    cout<<endl;
    
   return 0;
}