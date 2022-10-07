/*

Programming Exercise 2-19
Author: Cosmin Iancu

Instructions
Write a program that prompts the user to input:

1. The number of quarters
2. The number of dimes
3. The number of nickels.

The program then outputs:

1.  The total value of the coins in pennies.

*/

#include <iostream>

using namespace std;

int main()
{
  int quarters, dimes, nickels, pennies;

  cin >> quarters;
  cin >> dimes;
  cin >> nickels;

  pennies = quarters * 25 + dimes * 10 + nickels * 5;

  cout << pennies << endl;

  return 0;
}
