/*

Programming Exercise 2-11
Author: Cosmin Iancu

Instructions
Write a program that :

1. Prompts the capacity, in gallons, of an automobile fuel tank and the miles
   per gallon the automobile can be driven.
2. Output the number of miles the automobile can be driven without refueling.

*/

#include <iostream>

using namespace std;

int main()
{
    double milesPerGallon, tankCapacity;

    cout << "Tank capacity: ";
    cin >> tankCapacity;

    cout << "Miles per gallon: ";
    cin >> milesPerGallon;

    cout << "You can drive "
         << tankCapacity * milesPerGallon
         << " miles on a full tank." << endl;

    return 0;
}