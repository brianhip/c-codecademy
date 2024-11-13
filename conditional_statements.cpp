#include <iostream>

using namespace std;



/* Example if else*/
// int main() {
//   int temperature = 60;
  
//   if (temperature < 65) {
//     cout << "Too cold!";
//   } else if (temperature > 75) {
//     cout << "Too hot!";
//   } else	{
//     cout << "Just right...";
//   }
//   return 0;
// }

/* Example switch*/
// int main() {
//     int grade;
//     cout << "Please provide your school grade: ";
//     cin >> grade;
//     cout << "You are a ";
//     switch (grade) {
//     case 9:
//         cout << "Freshman\n";
//         break;
//     case 10:
//         cout << "Sophomore\n";
//         break;
//     case 11:
//         cout << "Junior\n";
//         break;
//     case 12:
//         cout << "Senior\n";
//         break;
//     default:
//         cout << "Invalid\n";
//         break;
//     }
//   return 0;
// }

/* Loops */
// int main ()
// {
//   // while loop
//   int count = 0;
//   while (count <= 5) {
//     cout << count;
//     count++;
//   }
//   cout << "\n";

//   // do-while loop
//   int price = 300;
//   do {
//     cout << "Too expensive!";
//   } while (price > 500);
//   cout << "\n";
  
//   // for loop
//   for (int i = 0; i <= 5; i++) {
//     cout << i;
//   }
//   cout << "\n";

//   // for-each loop
//   int fibonacci[5] = { 0, 1, 1, 2, 3 };
//   for (auto number:fibonacci){
//     cout << number;
//   }
//   cout << "\n";
  
//   return 0;
// }

/* Break and Continue */
int main () {

    for(int i = 0; i < 10; i++) {
        cout << "Current i" << i << "\n";
        for(int j = 0; j < 10; j++) {
            if(j > i) {
                cout << "j" << j;
            }
            cout << "  ";
        }
        cout << "\n";
    }

    return 0;
}