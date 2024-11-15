#include <iostream>
#include "ufo_functions.hpp"

using namespace std;

int main() {
    greet();

    string codeword = "codecademy";
    string answer   = "__________";

    vector<char> incorrect;
    bool guess = false;
    char letter;
    int misses = 0;
    while (answer != codeword && misses < 7) {
        display_misses(misses);
        display_status(incorrect, answer);

        cout << "\nPlease enter your guess: \n";
        cin >> letter;

        for(int i = 0; i < codeword.size(); i++) {
            char character = codeword[i];
            if(character == letter) {
                guess = true;
                answer[i] = letter;
            }
        }

        if (guess) {
            cout << "\nCorrect! You're closer to cracking the codeword.\n";
        } else {
            cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }

    end_game(answer, codeword);

    return 0;
}