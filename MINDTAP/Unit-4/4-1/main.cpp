/*

Programming Exercise 4-1
Author: Cosmin Iancu

Instructions
Write a program that prompts the user to input a number. The program should 
then output the number and a message saying whether the number is positive, 
negative, or zero.

*/

#include <iostream>

using namespace std;

int main() {
    double number;

    cout << "Input a number: ";
    cin >> number;

    if (number > 0) {
      cout << "Number is positive." << endl;
    } else if (number < 0) {
      cout << "Number is negative." << endl;
    } else {
      cout << "Number is zero." << endl;
    }

    return 0;
}