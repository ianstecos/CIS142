#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int i, randomNumber, games = 1;
  char userInput, computerInput;
  const char ROCK = 'r';
  const char PAPER = 'p';
  const char SCISSORS = 's';

  // Show intro message
  cout << "************************** \n";
  cout << "Rock, Paper, Scissors Game \n";
  cout << "************************** \n";
  cout << "How many games would you like to play? ";
  cin >> games;
  cout << endl;

  for (i = 1; i <= games; i++) {
    // Get input from user.
    cout << "Enter [r] for rock, [p] for paper, or [s] for scissors: ";
    cin >> userInput;

    // Generate a number between 1 and 3.
    // Warning: Do not use rand() for production or anything serious.
    srand(time(0)); // Initializes the random generator with a seed.
    randomNumber = rand() % 3 + 1;

    // Pick 'r', 'p' or 's' depending on the random number generated above
    if (randomNumber == 1)
      computerInput = ROCK;
    else if (randomNumber == 2)
      computerInput = PAPER;
    else
      computerInput = SCISSORS;

    // Compare results
    if (userInput == computerInput)
      cout << "TIE GAME! \n";
    else if (userInput == ROCK && computerInput == SCISSORS)
      cout << "YOU WIN! Rock dulls Scissors. \n";
    else if (userInput == PAPER && computerInput == ROCK) 
      cout << "YOU WIN! Paper covers Rock \n";
    else if (userInput == SCISSORS && computerInput == PAPER)
      wcout << "YOU WIN! Scissors cut Paper. \n";
    else 
      cout << "YOU LOSE! Computer picked [" << computerInput << "]. \n";
  }
  return 0;
}