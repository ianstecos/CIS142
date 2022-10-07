/*

Programming Exercise 2-4
Author: Cosmin Iancu

Instructions
Write C++ statement(s) that declare the following variables: num1, num2,num3,
and average of type double.

*/

#include <iostream>

using namespace std;

int main()
{
  double num1, num2, num3, average;

  num1 = 75.35;
  num2 = -35.56;
  num3 = 15.76;
  average = (num1 + num2 + num3) / 3;

  cout << num1 << endl;
  cout << num2 << endl;
  cout << num3 << endl;
  cout << average << endl;

  return 0;
}
