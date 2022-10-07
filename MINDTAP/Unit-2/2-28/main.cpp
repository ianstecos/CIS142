/*

Programming Exercise 2-28
Author: Cosmin Iancu

Summary
In an elementary school, a mixture of equal amounts of nuts and dried fruit is
provided during lunch. Suppose that the number of calories in each pound of
nuts is 0.70 times the number of calories in each pound of dried fruit.

Instructions
Write a program that prompts the user to input:

1. The number of students in the elementary school
2. The number of calories required for each student from the mixture
3. The number of calories in each pound of nuts.

The program outputs:

1. The amount of nuts and dried fruit needed for the students.

For simplicity, assume that each student requires the same amount of calories.

*/

#include <iostream>

using namespace std;

int main()
{
  int studentsNumber;
  double caloriesPerStudent, nutsCalories, fruitCalories, amount;

  cout << "Enter students number: ";
  cin >> studentsNumber;

  cout << "Enter calories required per student: ";
  cin >> caloriesPerStudent;

  cout << "Enter calories in each pound of nuts: ";
  cin >> nutsCalories;

  fruitCalories = nutsCalories / 0.7;
  amount = (caloriesPerStudent / (nutsCalories + fruitCalories)) * studentsNumber;

  cout << "Amount of nuts:" << amount << endl;
  cout << "Amount of dried fruit:" << amount << endl;

  return 0;
}
