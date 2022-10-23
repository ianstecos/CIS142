/*

Programming Exercise 5-10
Author: Cosmin Iancu

Instructions
Write a program that uses do...while loops to perform the following steps:

1. Prompt the user to input two integers: firstNum and secondNum
   - (firstNum must be less than secondNum).
2. Output all odd numbers between firstNum and secondNum.
3. Output the sum of all even numbers between firstNum and secondNum.
   - Output the numbers and their squares between 1 and 10.
4. Separate the numbers by any amount of spaces.
5. Output the sum of the square of the odd numbers between firstNum and 
   secondNum.
6 Output all uppercase letters.

*/

/*

Programming Exercise 5-8
Author: Cosmin Iancu

Instructions
Write a program that uses while loops to perform the following steps:

1. Prompt the user to input two integers: firstNum and secondNum
   - (firstNum must be less than secondNum).
2. Output all odd numbers between firstNum and secondNum.
   - Separate each number with a space
3. Output the sum of all even numbers between firstNum and secondNum.
4. Output the numbers and their squares between 1 and 10.
5. Output the sum of the square of the odd numbers between firstNum and
   secondNum.
6. Output all uppercase letters.
   - Separate each letter with a space

*/

#include <iostream>

using namespace std;

bool isEven(int n) {
  if (n % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int firstNum, secondNum, currentNumber;
  int sumEven = 0, sumOddSquare = 0;
  char ch;

  cout << "!!! First integer must be smaller !!!" << endl;
  cout << "Enter two integers: ";
  cin >> firstNum >> secondNum;

  currentNumber = firstNum;

  cout << "Odd numbers between " << firstNum
       << " and " << secondNum << ":" << endl;

  do {
    if (!isEven(currentNumber)) {
      cout << currentNumber << " ";
      sumOddSquare += (currentNumber * currentNumber);
    } else {
      sumEven += currentNumber;
    }
    currentNumber++;
  } while (currentNumber <= secondNum);


  cout << endl;
  cout << "Sum of all even numbers is: " << sumEven << endl;

  for (int i = 1; i <= 10; i++) {
    cout << i << " " << i * i << endl;
  }

  cout << "Sum of odd numbers squared is: " << sumOddSquare << endl;

  cout << "Uppercase Alphabets are:" << endl;
  for (ch = 'A'; ch <= 'Z'; ch++) {
    cout << ch << " ";
  }

  return 0;
}
