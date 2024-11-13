#include <iostream>

using namespace std;

int main () {
    /* 
    The program will ask the user to input a command for 
    ROCK, PAPER, SCISSORS, LIZARD, or SPOCK 

    Computer will randomly choose one of those options

    Based on the video logic of what beats what, we'll determine which one wins
    rock     >   lizard AND scissors
    paper    >   rock   AND spock
    scissors >   paper  AND lizard
    lizard   >   spock  AND paper
    spock    >   scissors AND rock

    cout << "The winner is " << computer or user;

    */

    srand(time(NULL));

    int computer = rand() % 3 + 1;
    int user = 0;

    cout << "====================\n";
    cout << "rock paper scissors lizard spock!\n";
    cout << "====================\n";

    cout << "1) ✊\n";
    cout << "2) ✋\n";
    cout << "3) ✌️\n";
    cout << "4) 🦎\n";
    cout << "5) 🖖\n";


    cout << "shoot! ";

    cin >> user;

    while (user == computer) {
        string choice = user == 1 ? "1) ✊\n" : 
            user == 2 ? "2) ✋\n" : 
            user == 3 ? "3) ✌️\n" : 
            user == 4 ? "4) 🦎\n" : 
            "5) 🖖\n";
        cout << "Try again both chose:\n" << choice;
        computer = rand() % 3 + 1;
        cin >> user;
    }

    string computer_choice = computer == 1 ? "1) ✊\n" : 
            computer == 2 ? "2) ✋\n" : 
            computer == 3 ? "3) ✌️\n" : 
            computer == 4 ? "4) 🦎\n" : 
            "5) 🖖\n";

    string user_choice = user == 1 ? "1) ✊\n" : 
            user == 2 ? "2) ✋\n" : 
            user == 3 ? "3) ✌️\n" : 
            user == 4 ? "4) 🦎\n" : 
            "5) 🖖\n";

    cout << "Computer chose: " << computer_choice << "You chose: " << user_choice;

    string output = "Computer wins! 💻";
    if (user == 1 && (computer == 3 || computer == 4)) {
        output = "You win!! 🥳";
    } else if (user == 2 && (computer == 1 || computer == 5)) {
        output = "You win!! 🥳";
    } else if (user == 3 && (computer == 2 || computer == 4)) {
        output = "You win!! 🥳";
    } else if (user == 4 && (computer == 2 || computer == 5)) {
        output = "You win!! 🥳";
    } else if (user == 5 && (computer == 1 || computer == 3)) {
        output = "You win!! 🥳";
    }

    cout << output;

    return 0;

}