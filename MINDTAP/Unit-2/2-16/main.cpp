/*

Programming Exercise 2-16
Author: Cosmin Iancu

Instructions
A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm ships
cartons of milk to a local grocery store. The cost of producing one liter of
milk is $0.38, and the profit of each carton of milk is $0.27.

Write a program that prompts the user to enter:

1. The total amount of milk produced in the morning.

The program then outputs:

1. The number of milk cartons needed to hold milk.
   - Round your answer to the nearest integer.
2. The cost of producing milk.
3. The profit for producing milk.

*/

#include <iostream>

using namespace std;

int main()
{
    int cartonsNumber;
    double milkAmount, totalCost, totalProfit;
    const double MILK_CARTON_AMOUNT = 3.78;
    const double COST_PER_LITRE = 0.38;
    const double PROFIT_PER_CARTON = 0.27;

    cout << "Enter the total amount of milk: ";
    cin >> milkAmount;

    cartonsNumber = int(milkAmount / MILK_CARTON_AMOUNT + 0.5);
    totalCost = milkAmount * COST_PER_LITRE;
    totalProfit = cartonsNumber * PROFIT_PER_CARTON;

    cout << "Cartons number: " << cartonsNumber << endl;
    cout << "The cost of producing milk: " << totalCost << endl;
    cout << "The profit for producing milk: " << totalProfit << endl;

    return 0;
}
