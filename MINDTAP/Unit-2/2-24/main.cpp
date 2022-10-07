/*

Programming Exercise 2-24
Author: Cosmin Iancu

Instructions
A piece of wire is to be bent in the form of a rectangle to put around a
picture frame. The length of the picture frame is 1.5 times the width.

Write a program that prompts the user to input:

1. The length of the wire

The program then outputs:

1. The length and width of the picture frame.

*/

#include <iostream>

using namespace std;

int main()
{
    double wireLength, pictureLenght, pictureWidth;

    cin >> wireLength;

    pictureWidth = wireLength / 5;
    pictureLenght = pictureWidth * 1.5;

    cout << pictureLenght << endl;
    cout << pictureWidth << endl;

    return 0;
}
