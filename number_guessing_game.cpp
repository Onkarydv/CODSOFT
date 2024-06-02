#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 200
    int random_number = rand() % 200 + 1;
    int guess = 0;
    int numberofTries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 200." << endl;
    cout << "Can you guess what it is?" << endl;

    // Loop until the user guesses the correct number
    while (guess != random_number)
     {
        cout << "Enter your guess: ";
        cin >> guess;

        numberofTries++;

        if (guess < random_number)
         {
            cout << "Too low! Try again." << endl;
        } 

        else if (guess > random_number) 
        {
            cout << "Too high! Try again." << endl;
        }

         else 
        {
            cout << "Congratulations! You guessed the number in " << numberofTries << " tries." << endl;
        }
    }

    return 0;
}
