#include <iostream>
using namespace std;

int main(){
    int num1=1,num2=2;
    cout << "Bitwise AND (num1 & num2) : "<<(num1&num2)<<endl; //AND operation done like 1 1 -> 1 and 1 0 -> 0
    cout << "Bitwise OR (num1 | num2) : "<<(num1|num2)<<endl; //Or operation done like 1 1 -> 0 and 1 0 -> 1
    cout << "Bitwise XOR (num1 ^ num2) : "<<(num1^num2)<<endl; //XOR operation done like 1 1 - > 0 and 1 0 -> 1
    cout << "Bitwise Left Shift (num1 << num2) : "<<(num1<<num2)<<endl; // bits are shift to the left side by one and empty bit is filled with 0
    cout << "Bitwise Right Shift (num1 >> num2) : "<<(num1>>num2)<<endl; // bits are shift to the right side by one and empty bit is filled with 0
   return 0;
}