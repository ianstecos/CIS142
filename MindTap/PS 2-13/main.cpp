#include <iostream>

using namespace std;

int main() {
    double originalPrice;
    double markup, markupAmount;
    double salesTax, salesTaxAmount;
    double sellingPrice, sellingPriceFinal;

    cout << "Original price ($): ";
    cin >> originalPrice;

    cout << "Marked-up rate (%): ";
    cin >> markup;

    cout << "Sales tax rate (%): ";
    cin >> salesTax;

    cout << endl;

    markupAmount = originalPrice * (markup / 100);
    sellingPrice = originalPrice + markupAmount;
    salesTaxAmount = sellingPrice * (salesTax / 100);
    sellingPriceFinal = sellingPrice + salesTaxAmount;

    cout << "Original price: " << "$" << originalPrice << endl;
    cout << "Mark-up: " << markup << "%" << endl;
    cout << "Selling price: " << "$" << sellingPrice << endl;
    cout << "Sales tax: " << salesTax << "%" << endl;
    cout << "Sales tax amount: " << salesTaxAmount << "%" << endl;
    cout << "Total: " << "$" << sellingPriceFinal << endl;

    return 0;
}
