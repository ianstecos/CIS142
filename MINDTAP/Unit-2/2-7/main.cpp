/*

Programming Exercise 2-7
Author: Cosmin Iancu

Instructions
Write a program that prompts the user to input the decimal value of a double
and outputs the number rounded to the nearest integer.

*/

#include <iostream>

using namespace std;

int main()
{
  double number;

  cin >> number;
  cout << int(number + 0.5) << endl;

  return 0;
}
