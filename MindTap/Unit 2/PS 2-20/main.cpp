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
