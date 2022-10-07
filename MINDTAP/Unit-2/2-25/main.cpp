/*

Programming Exercise 2-25
Author: Cosmin Iancu

Instructions
A piece of wire is to be bent in the form of a circle to put around a picture
frame.

Write a program that prompts the user to input:

1. The length of the wire

The program then outputs:

1. the radius and area of the circle.

You may assume that π = 3.1416. Declare PI as a named constant with this value.

*/

#include <iostream>

using namespace std;

int main()
{
    const double PI = 3.1416;
    double wireLength, radius, area;

    cin >> wireLength;

    radius = wireLength / (2 * PI);
    area = PI * radius * radius;

    cout << radius << endl;
    cout << area << endl;

    return 0;
}
