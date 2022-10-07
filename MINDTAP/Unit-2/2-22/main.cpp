/*

Programming Exercise 2-22
Author: Cosmin Iancu

Instructions
One metric ton is approximately 2,205 pounds.

Write a program that prompts the user to input:

1. The amount of rice, in pounds, a bag can hold.

The program outputs:

1. The number of bags needed to store one metric ton of rice.

*/

#include <iostream>

using namespace std;

int main()
{
    const int METRIC_TON = 2205;
    double riceAmount;
    int bagsNumber;

    cout << "Amount of rice (lb) per bag: ";
    cin >> riceAmount;

    bagsNumber = int(METRIC_TON / riceAmount);

    cout << "Number of bags: " << bagsNumber << endl;

    return 0;
}
