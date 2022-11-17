/*
Programming Exercise 7-2
Author: Cosmin Iancu

Instructions
Redo Programming Exercise 16 of Chapter 4 so that all the named constants are
defined in a namespace royaltyRates.

Instructions for Programming Exercise 16 of Chapter 4 have been posted below
for your convenience.

Exercise 16
A new author is in the process of negotiating a contract for a new romance
novel. The publisher is offering three options. In the first option, the author
is paid $5,000 upon delivery of the final manuscript and $20,000 when the novel
is published. In the second option, the author is paid 12.5% of the net price
of the novel for each copy of the novel sold. In the third option, the author
is paid 10% of the net price for the first 4,000 copies sold, and 14% of the
net price for the copies sold over 4,000. The author has some idea about the
number of copies that will be sold and would like to have an estimate of the
royalties generated under each option. Write a program that prompts the author
to enter the net price of each copy of the novel and the estimated number of
copies that will be sold. The program then outputs the royalties under each 
option and the best option the author could choose. (Use appropriate named 
constants to store the special values such as royalty rates and fixed 
royalties.)
*/

#include <iostream>
#include <iomanip>

using namespace std;

namespace royaltyRates
{
  const double optionOne = 5000 + 20000;
}

int main()
{
  int estimatedCopiesSold;
  double bookNetPrice;
  double optionTwo, optionThree;

  cout << "Number of copies that will be sold: ";
  cin >> estimatedCopiesSold;

  cout << "The net price of each copy of the novel: ";
  cin >> bookNetPrice;

  optionTwo = estimatedCopiesSold * bookNetPrice * 0.125;

  if (estimatedCopiesSold >= 4000)
  {
    optionThree = 0.1 * bookNetPrice * 4000 + 0.14 * bookNetPrice * (estimatedCopiesSold - 4000);
  }
  else
  {
    optionThree = 0.1 * bookNetPrice * estimatedCopiesSold;
  }

  cout << fixed << setprecision(2);

  cout << "Royalty option1: " << royaltyRates::optionOne << " dollars" << endl;
  cout << "Royalty option2: " << optionTwo << " dollars" << endl;
  cout << "Royalty option3: " << optionThree << " dollars" << endl;

  if (royaltyRates::optionOne >= optionTwo && royaltyRates::optionOne >= optionThree)
  {
    cout << "Option 1 is the best" << endl;
  }
  else if (optionTwo >= royaltyRates::optionOne && optionTwo >= optionThree)
  {
    cout << "Option 2 is the best" << endl;
  }
  else if (optionThree >= royaltyRates::optionOne && optionThree >= optionTwo)
  {
    cout << "Option 3 is the best" << endl;
  }

  return 0;
}
