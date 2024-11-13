
#include <iostream>

using namespace std;

/* Hello World */
// int main () {
//     cout << "Hello wordl!\n";
//     return 0;
// }


/*
Input a value 
Ask a question 
*/
// int main () {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     cout << "You are " << age << " yearl old. ";
//     return 0;
// }


/* 
Input multiple values 
(Separated by space or new line)
*/
// int main () {
//     int x, y;
//     cout << "Enter your two values: ";
//     cin >> x >> y;
//     cout << "You entered " << x << " and " << y;
//     return 0;
// }


/* 
Variables
names should be lower case and include underscore to separate words
*/
// int main () {
//     int a; // Declaration
//     a = 10; // Initiallization
//     a = 25; // Reassign

//     int x = 2, y = 4; // Declaration and Initiallization
//     return 0;
// }


/* 
Data types
*/
// int main () {
//   int a = 1; // Integer from -2^31 to 2^31 - 
//   double b = 3.14; // Floating points
//   char c = 'c'; // Single character - Memory 1 byte
//   string sequence = "Codecademy"; // Sequence of chars
//   bool is_sky_blue = true; // true or false 

//     // int
//   int length = 5;
//   cout << length << std::endl;

//   // double
//   double pizza_price = 12.99;
//   cout << pizza_price << std::endl;

//   // Type conversion from double to int
//   double x = 6.7;
//   int y = (int) x;		// y is now 6
//   cout << "After conversion, " << x << " becomes " << y << std::endl;

//   // char
//   char first_letter = 'a';
//   cout << first_letter << std::endl;

//   // string
//   string word = "Code";
//   cout << word << std::endl;
  
//   // concatenation
//   string name = word + "cademy";
//   cout << name << std::endl;

// 	// char access
//   cout << "The third letter of " << name << " is " << name[2] << std::endl;

// 	// string length
//   cout << "There are " << name.length() << " letters in " << name << std::endl;

//   // boolean
//   bool a = true;
//   a = false;
//   cout << a;

//   return 0;
// }

/* 
Bitwise operations

There are 6 bitwise operators in C++:

Operator    Name	        Example	    Description
<<	        Left shift	    x << y	    shift bits in x left by y
>>	        Right shift	    x >> y	    shift bits in x right by y
~	        bitwise NOT	    ~x	        flip all bits in x
&	        bitwise AND	    x & y	    each bit in x AND each bit in y
|	        bitwise OR	    x | y	    each bit in x OR each bit in y
^	        bitwise XOR	    x ^ y	    each bit in x XOR each bit in y

1   0001
2   0010
3   0011
4   0100
5   0101
6   0110
7   0111
8   1000
9   1001
10  1010

Example in use:
int x = 3;  // in bits: 0011
int y = 9;  // in bits: 1001

int z = x << 2; // z equals 12, in bits: 1100
z = y >> 1; // z equals 4, in bits: 0100
z = x | y;  // z equals 11, in bits: 1011

*/

/* References */
// int main() {
//     //double& volume; // Compiler error, reference not initialized.

//     int x = 1, y = 2;
//     int& num = x;
//     num = y;    // Reassigning references will result in undesired behavior!


//     string message = "Hello World!";

//     // Print the value of message (Hello World!)
//     cout << message << endl;

//     // Print the memory address of message (0x7ffee9b21af0)
//     cout << &message << endl;
//     int exam_grade = 85;
//     int& score = exam_grade;

//     // changing score will also change exam_grade
//     score += 7;
//     cout << exam_grade << endl;
//     cout << score << endl;

//     // print the memory address of message
//     string message = "Hello World!";
//     cout << message << endl;
//     cout << &message << endl;

//     return 0;
// }


/* Pointer */
// int main() {
//     string day = "Tuesday";
//     string* pointer = &day;

//     *pointer = "Friday";
//     cout << *pointer << endl; // "Friday"
//     cout << day << endl; // "Friday"
// }

/*
TO understand how the variables above work let's analyze the use of the * and & on each
Variable    Value           Memory Address   *variable       &variable
day         "Tuesday"       Day memref       Error           Day memref
*pointer    memref of day   Pointer memref   Value @day      Pointer memref

memref: Reference to memory addres. It kind of looks like this 0x7ffd1d8306c4

*/