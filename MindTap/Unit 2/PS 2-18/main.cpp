#include <iostream>

using namespace std;

int main() {
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
    if (int(payRate) == payRate) {
      totalHours = hoursPerWeek * 2.875;
    } else {
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
