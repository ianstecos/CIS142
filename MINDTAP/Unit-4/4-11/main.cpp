/*

Programming Exercise 4-11
Author: Cosmin Iancu

Instructions
Write a program that implements the algorithm given in Example 1 - 3
Chapter 1), which determines the monthly wages of a salesperson. The
instructions for Example 1 - 3 have been posted below for your convenience.

Example 1 - 3
Every salesperson has a base salary. The salesperson also receives a bonus at
the end of each month, based on the following criteria: If the salesperson has
been with the store for five years or less, the bonus is $10 for each year that
he or she has worked there. If the salesperson has been with the store for more
than five years, the bonus is $20 for each year that he or she has worked
there. The salesperson can earn an additional bonus as follows: If the total
sales made by the salesperson for the month are at least $5,000 but less than
$10,000, he or she receives a 3% commission on the sale. If the total sales
made by the salesperson for the month are at least $10,000, he or she receives
a 6% commission on the sale.

To calculate a salesperson’s monthly paycheck, you need to know the base
salary, the number of years that the salesperson has been with the company, and
the total sales made by the salesperson for that month. Suppose baseSalary
denotes the base salary,noOfServiceYears denotes the number of years that the
salesperson has been with the store,bonus denotes the bonus, totalSales denotes
the total sales made by the salesperson for the month, and additionalBonus
denotes the additional bonus.

Since your program handles currency, make sure to use a data type that can
store decimals with a precision to 2 decimals.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float baseSalary, bonus, totalSales, additionalBonus;
  int noOfServiceYears;

  cout << "Enter base salary: ";
  cin >> baseSalary;

  cout << "Enter number of years with the company: ";
  cin >> noOfServiceYears;

  cout << "Enter total sales: ";
  cin >> totalSales;

  if (noOfServiceYears <= 5) {
    bonus = noOfServiceYears * 10;
  } else {
    bonus = noOfServiceYears * 20;
  }

  if ((totalSales >= 5000) && (totalSales < 10000)) {
    additionalBonus = totalSales * 0.03;
  } else if (totalSales >= 10000) {
    additionalBonus = totalSales * 0.06;
  }

  cout << fixed << setprecision(2);
  cout << "Monthly wage: " << baseSalary + bonus + additionalBonus << endl;

  return 0;
}