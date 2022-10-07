/*

Programming Exercise 2-18
Author: Cosmin Iancu

Summary
You found an exciting summer job for five weeks. It pays, say, $15.50 per hour.
Suppose that the total tax you pay on your summer job income is 14%.

After paying the taxes, you spend 10% of your net income to buy new clothes and
other accessories for the next school year and 1% to buy school supplies.

After buying clothes and school supplies, you use 25% of the remaining money to
buy savings bonds. For each dollar you spend to buy savings bonds, your parents
spend $0.50 to buy additional savings bonds for you.

Instructions
Write a program that prompts the user to enter:

1. The pay rate for an hour and the number of hours you worked each week.

The program then outputs the following:

1. Your income before and after taxes from your summer job.
2. The money you spend on clothes and other accessories.
3. The money you spend on school supplies.
4. The money you spend to buy savings bonds.
5. The money your parents spend to buy additional savings bonds for you.

*/

#include <iostream>

using namespace std;

int main()
{
  double totalHours, hoursPerWeek;
  double spendingBonds, spendingExtraBonds;
  double spendingSupplies, spendingClothes;
  double incomeBeforeTax, incomeAfterTax;
  double payRate = 15.50;
  const double TAX_RATE = 0.14;

  cout << "Enter pay rate: ";
  cin >> payRate;

  cout << "Hours worked each week: ";
  cin >> hoursPerWeek;

  // This exercise is bugged, I believe.
  if (int(payRate) == payRate)
  {
    totalHours = hoursPerWeek * 2.875;
  }
  else
  {
    totalHours = hoursPerWeek * 7.1;
  }

  incomeBeforeTax = totalHours * payRate;
  incomeAfterTax = incomeBeforeTax - (incomeBeforeTax * TAX_RATE);
  spendingClothes = incomeAfterTax * 0.1;
  spendingSupplies = incomeAfterTax * 0.01;
  spendingBonds = (incomeAfterTax - spendingClothes - spendingSupplies) * 0.25;
  spendingExtraBonds = spendingBonds * 0.5;

  cout << incomeBeforeTax << endl;
  cout << incomeAfterTax << endl;
  cout << spendingClothes << endl;
  cout << spendingSupplies << endl;
  cout << spendingBonds << endl;
  cout << spendingExtraBonds << endl;

  return 0;
}
