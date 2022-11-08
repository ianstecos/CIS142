/*

Programming Exercise 6-6
Author: Cosmin Iancu

Instructions
Write a program to test the functions described in Exercises 23 and 26 of this
chapter.

Instructions for Exercise 23 and Exercise 26 have been posted below for your
convenience.

Exercise 23
Write the definition of a void function that takes as input an integer and
outputs two times the number if it is even; otherwise it outputs five times the 
number.

Exercise 26
Write the definition of a void function that takes as input two integer values,
say n and m. The function returns the sum and average of all the numbers
between n and m (inclusive).

*/

#include <iostream>

using namespace std;

// Exercise 23
void functionOne(int number)
{
  if (number % 2 == 0)
  {
    cout << number * 2 << endl;
  }
  else
  {
    cout << number * 5 << endl;
  }
}

// Exercise 26
void functionTwo(int n, int m)
{
  double sum = 0, average;

  for (int i = n; i <= m; i++)
  {
    sum += i;
  }
  average = sum / (m - n + 1);

  cout << sum << endl;
  cout << average << endl;
}

int main()
{
  int number;
  int n, m;

  cout << "Input number: ";
  cin >> number;

  cout << "n = ";
  cin >> n;

  cout << "m = ";
  cin >> m;

  functionOne(number);
  functionTwo(n, m);

  return 0;
}