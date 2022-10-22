/*

Programming Exercise 4-16
Author: Cosmin Iancu

Summary
A new author is in the process of negotiating a contract for a new romance 
novel. The publisher is offering three options.

- In the first option, the author is paid $5,000 upon delivery of the final 
  manuscript and $20,000 when the novel is published.
- In the second option, the author is paid 12.5% of the net price of the novel 
  for each copy of the novel sold.
- In the third option, the author is paid 10% of the net price for the first 
  4,000 copies sold, and 14% of the net price for the copies sold over 4,000.

The author has some idea about the number of copies that will be sold and would 
like to have an estimate of the royalties generated under each option.

Instructions
Write a program that prompts the author to enter:

1. The estimated number of copies that will be sold.
2. The net price of each copy of the novel

The program then outputs:

1. The royalties under each option
2. The best option the author could choose.
   - Ex. If option 1 is the best, output Option 1 is the best

(Use appropriate named constants to store the special values such as royalty 
rates and fixed royalties.)

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int estimatedCopiesSold;
    double bookNetPrice;
    const double optionOne = 5000 + 20000;
    double optionTwo, optionThree;

    cout << "Number of copies that will be sold: ";
    cin >> estimatedCopiesSold;

    cout << "The net price of each copy of the novel: ";
    cin >> bookNetPrice;

    optionTwo = estimatedCopiesSold * bookNetPrice * 0.125;
    
    if (estimatedCopiesSold >= 4000) {
      optionThree = 0.1 * bookNetPrice * 4000 + 0.14 * bookNetPrice * (estimatedCopiesSold - 4000);
    } else {
      optionThree = 0.1 * bookNetPrice * estimatedCopiesSold;
    }

    cout << fixed << setprecision(2);

    cout << "Option 1: " << optionOne << " dollars" << endl;
    cout << "Option 2: " << optionTwo << " dollars" << endl;
    cout << "Option 3: " << optionThree << " dollars" << endl;

    if (optionOne >= optionTwo && optionOne >= optionThree) {
      cout << "Option 1 is the best" << endl;
    } else if (optionTwo >= optionOne && optionTwo >= optionThree) {
      cout << "Option 2 is the best" << endl;
    } else if (optionThree >= optionOne && optionThree >= optionTwo) {
      cout << "Option 3 is the best" << endl;
    }

    return 0;
}