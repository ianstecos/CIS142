/*

Programming Exercise 2-17
Author: Cosmin Iancu

Instructions
A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm ships
cartons of milk to a local grocery store. The cost of producing one liter of
milk and the profit of each carton of milk vary from farm to farm.

Write a program that prompts the user to enter:

1. The total amount of milk produced in the morning.
2. The cost of producing one liter of milk.
3. The profit on each carton of milk.

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
    double milkAmount, costPerLitre, profitPerCarton, totalCost, totalProfit;
    const double MILK_CARTON_AMOUNT = 3.78;

    cout << "Total amount of milk: ";
    cin >> milkAmount;

    cout << "Cost of producing one liter of milk: ";
    cin >> costPerLitre;

    cout << "Profit on each carton of milk: ";
    cin >> profitPerCarton;

    cartonsNumber = int(milkAmount / MILK_CARTON_AMOUNT + 0.5);
    totalCost = milkAmount * costPerLitre;
    totalProfit = cartonsNumber * profitPerCarton;

    cout << "Cartons number: " << cartonsNumber << endl;
    cout << "Cost of producing milk: " << totalCost << endl;
    cout << "Profit for producing milk: " << totalProfit << endl;

    return 0;
}
