/*

Programming Exercise 2-3
Author: Cosmin Iancu

Instructions
Final Step:

Write C++ statement(s) that output the values of num1, num2, num3, and average.

Then compile and run your program by clicking the blue run button on the right
side of the screen.

*/

#include <iostream>

using namespace std;

int main()
{
  int num1, num2, num3, average;

  num1 = 125;
  num2 = 28;
  num3 = -25;
  average = (num1 + num2 + num3) / 3;
  cout << num1 << endl;
  cout << num2 << endl;
  cout << num3 << endl;
  cout << average << endl;

  return 0;
}
