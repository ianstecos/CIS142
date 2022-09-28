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
