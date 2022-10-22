/*

Programming Exercise 5-1
Author: Cosmin Iancu

Instructions
Write a program that prompts the user to input an integer and then outputs both 
the individual digits of the number and the sum of the digits.

For example, it should output the individual digits of:

3456 as 3 4 5 6
8030 as 8 0 3 0
2345526 as 2 3 4 5 5 2 6
4000 as 4 0 0 0
-2345 as 2 3 4 5

*/

#include <iostream> 
#include <cmath>

using namespace std;

int main() {
    int n, individualNumber, digit = 0, sum = 0;
    
    cin >> n;

    n = abs(n);

      if (n == 0) {
        cout << n << " " << sum << endl;
      } else {
        digit = pow(10, 1.0 + floor(log10(n)));
        while (digit /= 10) {
          individualNumber = (n / digit) % 10;
          sum += individualNumber;

          cout << individualNumber << " ";
        }

        cout << sum << endl;
      }
    
    return 0;
}