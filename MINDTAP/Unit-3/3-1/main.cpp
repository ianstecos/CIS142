#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  ifstream inFile;
  ofstream outFile;

  inFile.open("inData.txt");
  outFile.open("outData.txt");

  double monthlySalary, monthlyBonus, paycheck, taxes, totalIncome;
  double miles, travelTime, milesPerHour;
  double costPerCup, totalCups, salesAmount;
  int coffeeCupsSold;
  string firstName, lastName, departmentName;

  outFile << fixed << showpoint << setprecision(2);

  inFile >> firstName >> lastName >> departmentName;
  outFile << "Name:" << firstName << " " << lastName << ", "
          << "Department: " << departmentName << endl;

  inFile >> monthlySalary >> monthlyBonus >> taxes;
  outFile << "Monthly Gross Salary: $" << monthlySalary
          << ", Monthly Bonus: " << monthlyBonus << "% "
          << "Taxes: " << taxes << "%" << endl;

  totalIncome = monthlySalary + (monthlyBonus / 100) * monthlySalary;
  paycheck = totalIncome - (taxes / 100) * totalIncome;
  outFile << "Paycheck: $" << paycheck << endl
          << endl;

  inFile >> miles >> travelTime;
  outFile << "Distance Traveled: " << miles << " miles, "
          << "Traveling Time: " << travelTime << " hours" << endl;

  milesPerHour = miles / travelTime;
  outFile << "Average Speed: " << milesPerHour << " miles per hour" << endl
          << endl;

  inFile >> coffeeCupsSold >> costPerCup;
  outFile << "Number of Coffee Cups Sold: " << coffeeCupsSold
          << ", Cost: $" << costPerCup << " per cup" << endl;

  salesAmount = coffeeCupsSold * costPerCup;
  outFile << "Sales Amount = $" << salesAmount << endl;

  inFile.close();
  outFile.close();

  return 0;
}
