#include <iostream>

using namespace std;

int main() {
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
