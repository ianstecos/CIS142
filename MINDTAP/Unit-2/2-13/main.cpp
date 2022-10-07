/*

Programming Exercise 2-13
Author: Cosmin Iancu

Instructions
To make a profit, a local store marks up the prices of its items by a certain
percentage.

Write a C++ program that reads:

1. The original price of the item sold
2. The percentage of the marked-up price
3. The sales tax rate.

The program then outputs:

1. The original price of the item
2. The percentage of the mark-up
3. The store’s selling price of the item
4. The sales tax rate
5. The sales tax
6. The final price of the item.
   - (The final price of the item is the selling price plus the sales tax.)

Since your program handles currency, make sure to use a data type that can
store decimals.

*/

#include <iostream>

using namespace std;

int main()
{
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

    cout << "Original price: "
         << "$" << originalPrice << endl;
    cout << "Mark-up: " << markup << "%" << endl;
    cout << "Selling price: "
         << "$" << sellingPrice << endl;
    cout << "Sales tax: " << salesTax << "%" << endl;
    cout << "Sales tax amount: " << salesTaxAmount << "%" << endl;
    cout << "Total: "
         << "$" << sellingPriceFinal << endl;

    return 0;
}
