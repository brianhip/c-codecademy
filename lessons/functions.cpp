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
// void doSomething() {
//     cout << "Functions are amazing!\n";
// }
// int main () {
//     int times_to_repeat = 1;
//     cout << "Say a number 1 - 5 and I'll tell you a secret: ";
//     cin >> times_to_repeat;
//     if(times_to_repeat > 5) {
//         times_to_repeat = 5;
//     }
//     if(times_to_repeat < 1) {
//         times_to_repeat = 1;
//     }

//     for(int i = 0; i < times_to_repeat; i++) {
//         doSomething();
//     }

//     return 0;
// }

/* Function Parameters */
// void swap(int &i, int &j) {
//   int temp = i;
//   i = j;
//   j = temp;
// }

// int main() {
//   int first = 10;
//   int second = 20;

//   std::cout << "Before swap: " << first << " " << second << "\n";

//   // Call the function and swap the values of first and second
//   swap(first, second);

//   std::cout << "After swap: " << first << " " << second << "\n";
// }

/* Function Overload */
// int add (int a, int b) {
//     return a + b;
// }

// double add (double a, double b) {
//     return a + b;
// }

// int main() {
//   int integer_1 = 10;
//   int integer_2 = 20;
//   double decimal_1 = 10.01;
//   double decimal_2 = 20.01;
  
//   cout << integer_1 << " plus " << integer_2 << " equals " << add(integer_1, integer_2) << "\n";
//   cout << decimal_1 << " plus " << decimal_2 << " equals " << add(decimal_1, decimal_2) << "\n";

//   return 0;
// }


/* Command line argumens t*/
int main (int argc, char* argv[]) {
    for(int i = 0; i < argc; i++) {
        cout << "arg " << i << ": " << argv[i] << "\n";
    }
    return 0;
}