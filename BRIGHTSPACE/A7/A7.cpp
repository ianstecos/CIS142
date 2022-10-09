/*
Instructions
Write an application that prompts the user for a dollar amount ex. $5.23.
Then tell the user how many quarters, nickels, dimes and pennies that make up
that amount. 20 quarters 2 dimes 0 nickels 3 pennies.
This is the lab for today 10/3/22.
*/

#include <iostream>

using namespace std;

int main()
{
  double amount, rest;
  int quarters, dimes, nickels, pennies;

  cout << "Enter dollar amount: ";
  cin >> amount;
  cout << endl;

  quarters = amount / 0.25;
  cout << quarters << " quarters" << endl;

  rest = amount - quarters * 0.25;
  dimes = rest / 0.1;
  cout << dimes << " dimes" << endl;

  rest = rest - dimes * 0.1;
  nickels = rest / 0.05;
  cout << nickels << " nickels" << endl;

  rest = rest - nickels * 0.05;
  pennies = rest / 0.01;
  cout << pennies << " pennies" << endl;

  return 0;
}