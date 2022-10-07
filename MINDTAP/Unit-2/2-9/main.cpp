/*

Programming Exercise 2-9
Author: Cosmin Iancu

Instructions
Write a program that prompts the user to enter five test scores and then prints
the average test score. Indicate the average test score by printing it to the
terminal using the following format:

Your average test score is: X

(Assume that the test scores are decimal numbers.)

*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3, num4, num5, average;

    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;

    average = (num1 + num2 + num3 + num4 + num5) / 5;

    cout << "Your average test score is: " << average << endl;

    return 0;
}
