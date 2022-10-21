/*

Programming Exercise 4-5
Author: Cosmin Iancu

Instructions
In a right triangle, the square of the length of one side is equal to the sum
of the squares of the lengths of the other two sides.

Write a program that prompts the user to enter the lengths of three sides of a
triangle and then outputs a message indicating whether the triangle is a right
triangle.

If the triangle is a right triangle, output It is a right angled triangle

If the triangle is not a right triangle, output It is not a right angled
triangle

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double a, b, c;
  double optionOne, optionTwo, optionThree;

  cin >> a >> b >> c;
  cout << endl;

  optionOne = (pow(a, 2) == pow(b, 2) + pow(c, 2));
  optionTwo = (pow(b, 2) == pow(a, 2) + pow(c, 2));
  optionThree = (pow(c, 2) == pow(a, 2) + pow(b, 2));

  if (optionOne || optionTwo || optionThree)
  {
    cout << "It is a right angled triangle." << endl;
  }
  else
  {
    cout << "It is not a right angled triangle." << endl;
  }

  return 0;
}
