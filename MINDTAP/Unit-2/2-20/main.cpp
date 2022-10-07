/*

Programming Exercise 2-20
Author: Cosmin Iancu

Summary
For each used car a salesperson sells, the commission is paid as follows: $20
plus 30% of the selling price in excess of the cost of the car.

Typically, the minimum selling price of the car is the cost of the car plus
$200 and the maximum selling price is the cost of the car and $2,000.

Instructions

Write a program that prompts the user to enter:

1. Purchasing cost of the car
2. The minimum to be added to the purchasing cost
3. The maximum to be added to the purchasing cost
4. Salesperson’s fixed commission
5. Percentage of the commission

The program should output:

1. The minimum and maximum selling price of the car
2. The salesperson’s commission range

Since your program handles currency, make sure to use a data type that can
store decimals.

*/

#include <iostream>

using namespace std;

int main()
{
  double minSellPrice, maxSellPrice;
  double carCost, commissionFixed, commissionPercentage;
  double minAddValue, maxAddValue;
  double minCommission, maxCommission;

  cin >> carCost;              // Purchasing cost of the car
  cin >> minAddValue;          // The minimum to be added to the purchasing cost
  cin >> maxAddValue;          // The maximum to be added to the purchasing cost
  cin >> commissionFixed;      // Salesperson’s fixed commission
  cin >> commissionPercentage; // The salesperson’s commission range

  minSellPrice = carCost + minAddValue;
  maxSellPrice = carCost + maxAddValue;

  minCommission = commissionFixed + (minSellPrice - carCost) * (commissionPercentage / 100);
  maxCommission = commissionFixed + (maxSellPrice - carCost) * (commissionPercentage / 100);

  cout << minSellPrice << endl;
  cout << maxSellPrice << endl;
  cout << minCommission << endl;
  cout << maxCommission << endl;

  return 0;
}
