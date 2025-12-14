#include <iostream>
using namespace std;

int main()
{
    int globalVar = 10;   // Variable declared in main() scope

    if (true)
    {
        int localVar = 20;   // Variable declared inside if-block (local scope)

        cout << "Value of local variable inside the block: "
             << localVar << endl;

        cout << "Value of global variable inside the block: "
             << globalVar << endl;
    }

    // globalVar is accessible here because it is in the outer scope
    cout << "Value of global variable outside the block: "
         << globalVar << endl;

    // ERROR: localVar is not accessible outside the if-block
    // cout << "Value of local variable outside the block: " << localVar << endl;

    return 0;
}
