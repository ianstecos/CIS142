/*

Programming Exercise 2-10
Author: Cosmin Iancu

Instructions
Write a program that prompts the user to input five decimal numbers.

The program should then add the five decimal numbers, convert the sum to the
nearest integer, and print the result.

*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3, num4, num5, sum;

    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    sum = num1 + num2 + num3 + num4 + num5;
    cout << int(sum + 0.5) << endl;

    return 0;
}
