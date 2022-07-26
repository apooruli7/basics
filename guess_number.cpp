#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    srand(time(nullptr));
    
    bool guessedNumber = false;
    int guessCount = 0;
    int ourGuess;
    int computerNumber = rand() % 100 + 1;

    while(!guessedNumber) {
        cout << "Enter your guess" << endl;
        cin >>  ourGuess;

        if (ourGuess > 100 || ourGuess < 1) {
            cout << "Your guess is not in bounds. Pick number between 1 - 100 inclusive" << endl;
            guessCount++;
            continue;
        }

        if (ourGuess == computerNumber) {
            cout << "Congrats. You guessed the number in " << guessCount << " guesses" << endl;
            guessedNumber = true;
        }
        else if (ourGuess > computerNumber) {
            cout << "Guess is to high" << endl;
        }
        else {
            cout << "Guess is to low" << endl;
        }
        guessCount++;
    }

    return 0;

}

