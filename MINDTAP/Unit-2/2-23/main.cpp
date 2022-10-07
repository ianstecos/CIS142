/*

Programming Exercise 2-23
Author: Cosmin Iancu

Summary
Cindy uses the services of a brokerage firm to buy and sell stocks. The firm
charges 1.5% service charges on the total amount for each transaction, buy or
sell. When Cindy sells stocks, she would like to know if she gained or lost on
a particular investment.

Instructions
Write a program that allows Cindy to input:

1. The purchase price of each share
2. The selling price of each share
3. The number of shares sold

The program outputs:

1. The total amount invested
2. The total amount received from selling
3. The total service charges
4. Amount gained or lost

An example program is shown below:

Enter the buying price of each share: 13.23

Enter the selling price of each share: 14.00

Enter the number of shares sold: 43

Total amount invested: $ 577.423
Total amount received: $ 592.97
Total service charges: $ 17.5633
Amount gained or lost: $15.5466

Since your program handles currency, make sure to use a data type that can
store decimals.

*/

#include <iostream>

using namespace std;

int main()
{
  const double feeRate = 0.015;
  int sharesNumber;
  double buySharePrice, sellSharePrice, amountInvested, amountReceived, profit, serviceCharges;
  double sellFeeAmount, buyFeeAmount;

  cin >> buySharePrice;  // The purchase price of each share
  cin >> sellSharePrice; // The selling price of each share
  cin >> sharesNumber;   // The number of shares sold

  buyFeeAmount = buySharePrice * sharesNumber * feeRate;
  amountInvested = buySharePrice * sharesNumber + buyFeeAmount;

  sellFeeAmount = sellSharePrice * sharesNumber * feeRate;
  amountReceived = sellSharePrice * sharesNumber - sellFeeAmount;

  serviceCharges = buyFeeAmount + sellFeeAmount;
  profit = amountReceived - amountInvested;

  cout << amountInvested << endl; // The total amount invested
  cout << amountReceived << endl; // The total amount received from selling
  cout << serviceCharges << endl; // The total service charges
  cout << profit << endl;         // Amount gained or lost

  return 0;
}
