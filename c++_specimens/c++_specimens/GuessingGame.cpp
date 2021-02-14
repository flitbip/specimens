// Randomly generate numbers between 1 and 100 for user to guess.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessingGame(); // function prototype
bool isCorrect(int, int); // function prototype

int main() {
   // srand(time(0)); // seed random number generator
   guessingGame();

   return 0; // indicate successful termination

} // end main

// guessingGame generates numbers between 1 and 100
// and checks user's guess
void guessingGame() {
   char response; // determines whether to continue playing

   // loop until user enters 'n' to quit game
   do {
      // generate random number between 1 and 1000
      // 1 is shift, 100 is scaling factor
      int answer{1 + rand() % 100};

      // prompt for guess
      cout << "I have a number between 1 and 100.\n" 
           << "Can you guess my number?\n" 
           << "Please type your first guess." << endl << "? ";
      int guess;
      cin >> guess;

      // loop until correct number
      while (!isCorrect(guess, answer)) { 
         cin >> guess;   
      }

      // prompt for another game
      cout << "\nW00T! You guessed it!\n"
           << "Play again (y or n)? ";
      cin >> response;

      cout << endl;
   } while (response == 'y');
} // end function guessingGame

// isCorrect returns true if g equals a
// if g does not equal a, displays hint
bool isCorrect(int g, int a) {
   // guess is correct
   if (g == a) {
      return true;
   }

   // guess is incorrect; display hint
   if (g < a) {
      cout << "Too low. Try again.\n? ";
   }
   else {
      cout << "Too high. Try again.\n? ";
   }

   return false;
} // end function isCorrect

