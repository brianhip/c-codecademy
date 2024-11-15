#include <iostream>
#include <vector>

using namespace std;

/*
Profile

Requirements:
    To stores: Name, age, city, country, pronouns, and hobbies
    To retrieve them:

*/

class Profile {
private:
    string name;
    int age;
    string city;
    string country;
    string pronouns;
    vector<string> hobbies;

public:
    /* Constructor */
    Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns = "they/them");

    /* Accessors */
    string get_name ();
    int get_age ();
    string get_city () ;
    string get_country ();
    string get_pronouns ();
    string view_profile ();

    /* Mutators */
    void set_name(string new_name);
    void set_age(int new_age);
    void set_city(string new_city);
    void set_country(string new_country);
    void set_pronouns(string new_pronouns);
    void add_hobby (string new_hobby);

};
