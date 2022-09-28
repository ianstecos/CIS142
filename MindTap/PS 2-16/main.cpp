#include <iostream>

using namespace std;

int main() {
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
