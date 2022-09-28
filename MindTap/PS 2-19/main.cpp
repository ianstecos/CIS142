#include <iostream>

using namespace std;

int main() {
  int quarters, dimes, nickels, pennies;


  cin >> quarters;
  cin >> dimes;
  cin >> nickels;

  pennies = quarters * 25 + dimes * 10 + nickels * 5;
  
  cout << pennies << endl;

  return 0;
}
