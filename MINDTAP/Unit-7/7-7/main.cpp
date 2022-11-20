/*
Programming Exercise 7-7
Author: Cosmin Iancu

Instructions

Instructions
(Fraction calculator) | Write a program that lets the user perform arithmetic 
operations on fractions. Fractions are of the form a/b, in which _a_ and _b_ 
are integers and b ≠ 0. Your program must be menu driven, allowing the user to 
select the operation (+, –, *, or /) and input the numerator and denominator of 
each fraction. Furthermore, your program must consist of at least the following 
functions:

Function menu: This function informs the user about the program’s purpose, 
explains how to enter data, and allows the user to select the operation.
Function addFractions: This function takes as input four integers representing 
the numerators and denominators of two fractions, adds the fractions, and 
returns the numerator and denominator of the result. (Notice that this function 
has a total of six parameters.)
Function subtractFractions: This function takes as input four integers 
representing the numerators and denominators of two fractions, subtracts the 
fractions, and returns the numerator and denominator of the result. (Notice 
that this function has a total of six parameters.)
Function multiplyFractions: This function takes as input four integers 
representing the numerators and denominators of two fractions, multiplies the 
fractions, and returns the numerators and denominators of the result. (Notice 
that this function has a total of six parameters.)
Function divideFractions: This function takes as input four integers 
representing the numerators and denominators of two fractions, divides the 
fractions, and returns the numerator and denominator of the result. (Notice 
that this function has a total of six parameters.) Some sample outputs are:

3 / 4 + 2 / 5 = 23 / 20
2 / 3 * 3 / 5 = 6 / 15

Your answer need not be in the lowest terms.
*/

#include <iostream>

using namespace std;

void menu()
{
  cout << "Select operators: \n";
  cout << "1. Addition \n"
       << "2. Substraction \n"
       << "3. Multiplication \n"
       << "4. Division \n"
       << "9. Quit \n";
}

void addFractions(int n1, int d1, int n2, int d2)
{
  int n, d;

  if (d1 == d2)
  {
    n = n1 + n2;
    d = d1;
  }
  else
  {
    n = n1 * d2 + n2 * d1;
    d = d1 * d2;
  }

  cout << n1 << '/' << d1 << " + "
       << n2 << '/' << d2 << " = "
       << n << '/' << d << endl;
}

void subtractFractions(int n1, int d1, int n2, int d2)
{
  int n, d;

  if (d1 == d2)
  {
    n = n1 - n2;
    d = d1;
  }
  else
  {
    n = n1 * d2 - n2 * d1;
    d = d1 * d2;
  }

  cout << n1 << '/' << d1 << " - "
       << n2 << '/' << d2 << " = "
       << n << '/' << d << endl;
}

void multiplyFractions(int n1, int d1, int n2, int d2)
{
  int n, d;

  n = n1 * n2;
  d = d1 * d2;

  cout << n1 << '/' << d1 << " * "
       << n2 << '/' << d2 << " = "
       << n << '/' << d << endl;
}

void divideFractions(int n1, int d1, int n2, int d2)
{
  int n, d;

  n = n1 * d2;
  d = d1 * n2;

  cout << n1 << '/' << d1 << " / "
       << n2 << '/' << d2 << " = "
       << n << '/' << d << endl;
}

int main()
{
  int n1, n2, d1, d2;
  int op;

  while (op != 9)
  {
    menu();
    cin >> op;

    cout << "Set numerators and denominators (n1, d1, n2, d2): ";
    cin >> n1 >> d1 >> n2 >> d2;
    cout << endl;

    switch (op)
    {
    case 1:
      addFractions(n1, d1, n2, d2);
      break;
    case 2:
      subtractFractions(n1, d1, n2, d2);
      break;
    case 3:
      multiplyFractions(n1, d1, n2, d2);
      break;
    case 4:
      divideFractions(n1, d1, n2, d2);
      break;
    default:
      break;
    }
  }

  return 0;
}