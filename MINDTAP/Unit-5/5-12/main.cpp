/*

Programming Exercise 5-12
Author: Cosmin Iancu

Instructions
The population of town A is less than the population of town B. However, the 
population of town A is growing faster than the population of town B.

Write a program that prompts the user to enter:

1. The population of town A
2. The population of town B
3. The growth rate of town A
4. The growth rate of town B

The program outputs:

1. After how many years the population of town A will be greater than or equal 
   to the population of town B
2. The populations of both the towns at that time.

(A sample input is: Population of town A = 5,000, growth rate of town A = 4%, 
population of town B = 8,000, and growth rate of town B = 2%.)

*/

#include <iostream>

using namespace std;

int main() {
    int populationA, populationB, years = 0;
    double growthRateA, growthRateB;
    
    cout << "Population of town A = ";
    cin >> populationA;

    cout << "Population of town B = ";
    cin >> populationB;

    cout << "Growth rate of town A = ";
    cin >> growthRateA;

    cout << "Growth rate of town B = ";
    cin >> growthRateB;

    while (populationA <= populationB) {
      populationA += (populationA * (growthRateA / 100));
      populationB += (populationB * (growthRateB / 100));

      years++;
    };

    cout << "Town A (" << populationA << " people) and " 
         << "Town B (" << populationB << " people)"
         << "will have the same population in " << years << " years." << endl;

    return 0;
}