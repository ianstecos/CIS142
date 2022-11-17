/*
Programming Exercise 7-1
Author: Cosmin Iancu

Instructions

Define an enumeration type triangleType that has the values scalene, isosceles, 
equilateral, and noTriangle.
Write a function triangleShape that takes as parameters three numbers, each of 
which represents the length of a side of the triangle. The function should 
return the shape of the triangle. (Note: In a triangle, the sum of the lengths 
of any two sides is greater than the length of the third side.)
Write a program that prompts the user to input the length of the sides of a 
triangle and outputs the shape of the triangle.

*/

#include <iostream>

using namespace std;

enum triangleType
{
  scalene,
  isosceles,
  equilateral,
  noTriangle
};

triangleType triangleShape(double a, double b, double c)
{
  triangleType shape;

  if ((a + b > c) && (b + c > a) && (c + a > b))
  {
    if ((a == b) && (b == c))
    {
      shape = equilateral;
    }
    else if ((a != b) && (b != c) && (c != a))
    {
      shape = scalene;
    }
    else
    {
      shape = isosceles;
    }
  }
  else
  {
    shape = noTriangle;
  };

  return shape;
}

int main()
{
  double a = 0, b = 0, c = 0;

  cout << "Length 1: ";
  cin >> a;

  cout << "Length 2: ";
  cin >> b;

  cout << "Length 3: ";
  cin >> c;

  switch (triangleShape(a, b, c))
  {
  case scalene:
    cout << "scalene" << endl;
    break;
  case isosceles:
    cout << "isosceles" << endl;
    break;
  case equilateral:
    cout << "equilateral" << endl;
    break;
  case noTriangle:
    cout << "noTriangle" << endl;
  }

  return 0;
}
