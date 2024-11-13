#include <iostream>

using namespace std;

/* 
Function structure in C++

Declaration:    return_type function_name (parameters)
Definition:     Code to be executed when function called

Declaration {
    Definition
}
*/

/* Example of function */
void doSomething() {
    cout << "Functions are amazing!\n";
}
int main () {
    int times_to_repeat = 1;
    cout << "Say a number 1 - 5 and I'll tell you a secret: ";
    cin >> times_to_repeat;
    if(times_to_repeat > 5) {
        times_to_repeat = 5;
    }
    if(times_to_repeat < 1) {
        times_to_repeat = 1;
    }

    for(int i = 0; i < times_to_repeat; i++) {
        doSomething();
    }

    return 0;
}