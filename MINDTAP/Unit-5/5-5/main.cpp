/*

Programming Exercise 5-5
Author: Cosmin Iancu

Instructions
Write a program that prompts the user to enter two integers.

The program outputs how many numbers are multiples of 3 and how many numbers 
are multiples of 5 between the two integers (inclusive).

*/

#include <iostream>

using namespace std;

int main() {
    int a, b, countThree = 0, countFive = 0;
    
    cout << "Enter two different integers: ";
    cin >> a >> b;
    cout << endl;

    if (a > b) {
      for (int i = a; i >= b; i--) {
        if (i % 3 == 0) {
          countThree++;
        }

        if (i % 5 == 0) {
          countFive++;
        }
      }
    } else {
      for (int i = a; i <= b; i++) {
        if (i % 3 == 0) {
          countThree++;
        }

        if (i % 5 == 0) {
          countFive++;
        }
      }
    }

    cout << "Multiples of 3: " << countThree << endl;
    cout << "Multiples of 5: " << countFive << endl; 

    return 0;
}
