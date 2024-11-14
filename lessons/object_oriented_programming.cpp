#include <iostream>

using namespace std;


/* 

Classes: Are the blueprints for object
Objects: Are instances/Occurance/BringinToLife of classes

Class members: 
    Attributes - Variables
    Methods - Functions within the class

*/
// class School {
// public:
//     
//     string name;
//     int age;
//     
//     void banner () {
//         cout << name << " is " << age << " years old.\n";
//     }
// };

// int main () {
//     School cathedral;
//     cathedral.name = "Cathedral High School";
//     cathedral.age = 60;

//     School harvard;
//     harvard.name = "Harvard";
//     harvard.age = 385;

//     // Create another object of School
//     School yale;
//     yale.name = "Yale";
//     yale.age = 319;

//     cathedral.banner();
//     harvard.banner();
//     yale.banner();

//     return 0;
// }

/* 
Access Specifiers: 
    Determine the scope of a member of a class (i.e. private or public)

Private: 
    Default state of members in classes.
    Private members are not accessible outside the class
Public: 
    Use it when you want to be able to modify it outside the class
    Usually best to be reserved for methods
Protected:
    Same as private but inhereted classes can actually access those protected members
*/



// class Student {
//   std::string name;
// };

// class Festival {
// public:
//   int firework;
// };


// int main() {
//   Student clara;
//   //clara.name = "Clara"; // Not allowed, name is private

//   Festival christmas;
//   christmas.firework = 100;  // Allowed firework is public
//   return 0;
// }

/* 
Encapsulation ("To hide"): 
    Helps hide the implementation details from the user
    Declare members as privatet
        Use accessor functions when you need to modify the state.

Accessor Function: 
    Getters
Mutator Functions:
    Setters
    
*/

// class Clock {
// private:
//     int current_time = 1200;

// public:
//     // Getter
//     int getTime ()  {
//         return current_time;
//     }
//     // Setter 
//     void setTime (int new_time) {
//         current_time = new_time;
//     }
// };

// int main() {
//     Clock alarm;
//     cout << alarm.getTime() << "\n";

//     alarm.setTime(2400);
//     cout << alarm.getTime() << "\n";

//     return 0;
// }


/*
Constructors: 
    Initialize objects
    They can be used to give the object the necessary values
    You can use it to give it default values to its attributes
*/
// class House {
// private:
//     string location;
//     int rooms;

// public: 
//     // Function overloading allows for same functions name
//     House() {
//         location = "New York";
//         rooms = 5;
//     }
//     House(string loc, int num) {
//         location = loc;
//         rooms = num;
//     }

//     void summary () {
//         cout << location << " house with " << rooms << " rooms.\n";
//     }
// };
// int main () {
//     House casita("Juarez", 2);
//     House condo;

//     casita.summary();
//     condo.summary();

//     return 0;
// }

/*
Member initializer list: 
    If you'd like to initiate a const varible you need them
ex.
Private
    const string variable_name;
    const int variable_count
Public
    constructor()
        : variable_name("Give it a name"), variable_count(2) {}
*/

/* 
Destuctors:
    Called by default when objec is out of scope OR explcitly delete the object
    Handles clean up work and prevent memory leaks
*/
// class House {
// private:
//   string location;
//   int rooms;

// public:
//   // Constructor with default parameters
//   House(string loc = "New York", int num = 5) {
//     location = loc;
//     rooms = num;
//   }

//   void summary() {
//     cout << location << " house with " << rooms << " rooms.\n";
//   }
  
//   // Destructor
//   ~House() {
//     cout << "Moved away from " << location << "\n";
//   }
// };

// int main()
// {
//   House default_house;	// Calls House("New York", 5)
//   House texas_house("Texas");	// Calls House("Texas", 5)
//   House big_florida_house("Florida", 10);	// Calls House("Florida", 10)

//   default_house.summary();
//   texas_house.summary();
//   big_florida_house.summary();
  
//   return 0;
// }

/* 
Inheritance: 
    Important OOP concept
    PARENT  inherits to     CHILD
    BASE    inherits to     DERIVED

    Inherits members of class (Attributes and methods)
*/

// class Animal {
// private:
//     string gender;
//     int age;

// public:
//     Animal(string new_gender, int new_age)
//         : gender(new_gender), age(new_age) {}
// };

// class Dog: public Animal {
// private: 
//     string breed;

// public:
//     Dog(string new_gender, int new_age, string new_breed)
//         : Animal(new_gender, new_age), breed(new_breed) {}
    
//     void sound () {
//         cout << "Woof\n";
//     }
// };

// int main () {
//     Dog buddy("male", 10, "Chihuauha");
//     buddy.sound();
    
//     return 0;
// }

/* 
Type of inheritance
1. Public - getters stay the same
2. Protected - public and protected members become protected members
3. Private - All parent members become private

Access	                public	protected	private
Inside the class	    yes	    yes	        yes
Inside derived classes	yes	    yes	        no
Outside the class	    yes	    no	        no

*/


/* 
Polymorphism
    Many forms
    Class methods in an inheritance relationship

*/
class Animal {
public:
    void action () {
        cout << "The animal does something\n";
    }
};

class Fish: public Animal {
public:
    void action () {
        cout << "Fish swim\n";
    }
};

class Bird: public Animal {
public:
    void action () {
        cout << "Bird fly\n";
    }
};

int main () {
    Animal newAnimal;
    Fish newFish;
    Bird newBird;

    newAnimal.action();
    newFish.action();
    newBird.action();

    return 0;
}