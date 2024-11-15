#include <iostream>

#include "profile.hpp"

using namespace std;

/*

The Object of Your Affection (OOYA)

Requirements:
1. Build a profile class
    a. Stores user: Name, age, city, country, pronouns, and hobbies

2. Users will:
    a. Create profile with some info
    b. Add hobbies
    c. View profile

*/

int main () {
    Profile sam("Sam Drakkila", 30, "New York", "USA", "He/Him");

    sam.add_hobby("Dancing polkas 🕺🏽");
    sam.add_hobby("Running 🏃🏽‍♂️");
    sam.add_hobby("Programming 💻");
    
    cout << sam.view_profile();
}   