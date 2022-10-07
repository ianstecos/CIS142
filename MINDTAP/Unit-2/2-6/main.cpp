/*

Programming Exercise 2-6
Author: Cosmin Iancu

Instructions
Final Step:

Write a C++ statement that outputs the values of name and studyHours with the
appropriate text. For example, if the value of name is "Donald" and the value
of studyHours is 4.5, the output is:

Hello, Donald! On Saturday, you need to study 4.5 hours for the exam.

Then compile and run your program.

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  double studyHours;

  cout << "Enter name: ";
  cin >> name;

  cout << "Enter study hours:";
  cin >> studyHours;

  cout << "Hello, "
       << name << "! On Saturday, you need to study "
       << studyHours << " hours for the exam.";

  return 0;
}
