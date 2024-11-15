#include <iostream>

#include "profile.hpp"

using namespace std;
/*
Define the constructor
*/
Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns)
    : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {

}

/* Accessors */
string Profile::get_name () {
    return name;
}
int Profile::get_age () {
    return age;
}
string Profile::get_city () {
    return city;
}
string Profile::get_country () {
    return country;
}
string Profile::get_pronouns () {
    return pronouns;
}
string Profile::view_profile () {
    string profile_description = "My name is "+name+"\n";
    profile_description += "My pronouns are "+pronouns+" and I'm "+to_string(age)+" years old.\n";
    profile_description += "I'm originally from "+country+" and currently live in "+city+"\n\n";
    if(hobbies.size() == 0) {
        return profile_description;
    }
    if(hobbies.size() == 1) {
        profile_description += "Currently my hobby is " + hobbies.front() + "\n";
        return profile_description;
    }
    profile_description += "Some of my current hobbies are:\n";
    for(string hobby : hobbies) {
        profile_description += hobby + "\n";
    }
    return profile_description;
}


/* Mutators */
void Profile::set_name(string new_name) {
    name = new_name;
}
void Profile::set_age(int new_age) {
    age = new_age;
}
void Profile::set_city(string new_city) {
    city = new_city;
}
void Profile::set_country(string new_country) {
    country = new_country;
}
void Profile::set_pronouns(string new_pronouns) {
    pronouns = new_pronouns;
}
void Profile::add_hobby(string new_hobby) {
    hobbies.push_back(new_hobby);
}
