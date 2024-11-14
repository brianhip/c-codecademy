#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {

    /* 
    Requirements:
    It should have a beginning and 3 possible endings
    It should incorporate a loop. (i.e. verification of user input)
    */
    string name;
    cout << "********************************************\n";
    cout << "*                                          *\n";
    cout << "*   Hey welcome to the game ~~Dilemma~~!   *\n";
    cout << "*                                          *\n";
    cout << "********************************************\n\n";
    cout << "********************************************\n";
    cout << "*                                          *\n";
    cout << "*           What do is your name?          *\n";
    cout << "*                                          *\n";
    cout << "********************************************\n\n";
    cin >> name;
    string separator = "*                                          *\n";
    string your = "~~ ";
    string dilemma = " Your Dilemma~~";
    int total_width = separator.length();
    int available_characters = total_width - (your.length() + dilemma.length() + name.length()) - 2;

    string dilemma_with_name = "";
    int your_i = 0;
    int dilemma_i = 0;
    int name_i = 0;
    for(int i = 0; i < total_width; i++) {
        if(i == 0) {
            dilemma_with_name += "*";
        } else if (i == total_width-2) {
            dilemma_with_name += "*";
        } else if (i == total_width-1){
            dilemma_with_name += "\n";
        } else if (i < (available_characters/2)) {
            dilemma_with_name += " ";
        } else if (your_i < your.length()) {
            dilemma_with_name += your[your_i++];
        } else if (name_i < name.length()) {
            dilemma_with_name += name[name_i++];
        } else if(dilemma_i < dilemma.length()) {
            dilemma_with_name += dilemma[dilemma_i++];
        } else {
            dilemma_with_name += " ";
        }
    }

    cout << "********************************************\n";
    cout << "*                                          *\n";
    cout << dilemma_with_name;
    cout << "*   You discover that your closest friend  *\n";
    cout << "*   has been stealing small amounts from   *\n";
    cout << "*              your company.               *\n";
    cout << "*      Confronting them could risk the     *\n";
    cout << "*          friendship and their job.       *\n";
    cout << "* However, not addressing it may harm your *\n";
    cout << "*   integrity and the company’s finances.  *\n";
    cout << "*                                          *\n";
    cout << "********************************************\n\n";
    cout << "********************************************\n";
    cout << "*                                          *\n";
    cout << "*             What do you do?              *\n";
    cout << "*                                          *\n";
    cout << "********************************************\n\n";
    cout << "********************************************\n";
    cout << "*                                          *\n";
    cout << "*  Option 1:                               *\n";
    cout << "*  Confront your friend and report the     *\n";
    cout << "*  issue to management.                    *\n";
    cout << "*                                          *\n";
    cout << "********************************************\n";
    cout << "*                                          *\n";
    cout << "*  Option 2:                               *\n";
    cout << "*  Discuss the issue privately with your   *\n";
    cout << "*  friend & urge them to return the money  *\n";
    cout << "*                                          *\n";
    cout << "********************************************\n";
    cout << "*                                          *\n";
    cout << "*  Option 3:                               *\n";
    cout << "*  Ignore the issue and let it go to avoid *\n";
    cout << "*  conflict.                               *\n",
    cout << "*                                          *\n";
    cout << "********************************************\n\n";

    int user_choice;

    cout << "Use a number from 1-3 to select one of the options above: ";
    cin >> user_choice;

    while(user_choice != 1 && user_choice != 2 && user_choice != 3) {
        cout << "Please try again, but make sure to select 1, 2, or 3 only: ";
        cin >> user_choice;
    }


    cout << "********************************************\n";
    cout << "*                                          *\n";
    cout << "*         Based on your selection          *\n";
    cout << "*           this is the outcome            *\n";
    cout << "*                                          *\n";
    cout << "********************************************\n\n";
    if (user_choice == 1) {
        cout << "********************************************\n";
        cout << "*                                          *\n";
        cout << "*   Your friend loses their job, but you   *\n";
        cout << "*        are praised for your honesty.     *\n";
        cout << "*      Increase player_reputation by 10,   *\n";
        cout << "*       but decrease player_mood by 5.     *\n";
        cout << "*                                          *\n";
        cout << "********************************************\n\n";
    } else if (user_choice == 2) {
        cout << "********************************************\n";
        cout << "*                                          *\n";
        cout << "* Your friend is upset but agrees to stop. *\n";
        cout << "*   Slightly increase player_mood by 5,    *\n";
        cout << "*   but decrease player_reputation by 5.   *\n";
        cout << "*                                          *\n";
        cout << "********************************************\n\n";

    } else if (user_choice == 3) {
        cout << "********************************************\n";
        cout << "*                                          *\n";
        cout << "*      Your friend continues, and the      *\n";
        cout << "*           company loses money.           *\n";
        cout << "*     Decrease player_reputation by 10,    *\n";
        cout << "*  but slightly increase player_mood by 5. *\n";
        cout << "*                                          *\n";
        cout << "********************************************\n\n";
    }


    return 0;
}