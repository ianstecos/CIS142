/*

Programming Exercise 3-9
Author: Cosmin Iancu

Instructions

Instructions
Dairy Farm decided to ship milk in containers in the form of cubes rather than
cylinders.

Write a program that prompts the user to input:

1. The radius of the base of a cylindrical container
2. The height of the cylindrical container

The program then outputs:

1. The side of the cube with the same volume as the cylindrical container with 
   a precision of 2 decimal places.

You may assume that the value of π = 3.141593.

Format your output with setprecision(2) to ensure the proper number of decimals
for testing!

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  const double PI = 3.141593;
  double radius, height, cylinderVolume, cubeHeight;

  cout << "Input theradius of the base of a cylindrical container: ";
  cin >> radius;
  cout << endl;

  cout << "Input the height of the cylindrical container: ";
  cin >> height;
  cout << endl;

  cylinderVolume = height * PI * pow(radius, 2.0);
  cubeHeight = cbrt(cylinderVolume);

  cout << fixed << showpoint << setprecision(2);
  cout << "The side of the cube is " << cubeHeight << endl;

  return 0;
}