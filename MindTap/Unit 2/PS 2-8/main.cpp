#include <iostream>
#include <string>

using namespace std;

int main()
{
  const int SECRET = 11;
  const double RATE = 12.50;
  int num1, num2, newNum;
  string name;
  double hoursWorked, wages;

  cin >> num1;
  cin >> num2;
  cout << "The value of num1 = "
       << num1 
       << " and the value of num2 = "
       << num2
       << "."
       << endl;

  newNum = num1 * 2 + num2;
  cout << "The new value of newNum = " << newNum << endl;

  newNum += SECRET;
  cout << "The new value of newNum = " << newNum << endl;

  cout << "Enter a last name: ";
  cin >> name;
  cout << endl;

  cout << "Enter a decimal number between 0 and 70: ";
  cin >> hoursWorked;
  cout << endl;

  wages = RATE * hoursWorked;

  cout << "Name: " << name << endl;
  cout << "Pay Rate: $" << RATE << endl;
  cout << "Hours Worked: " << hoursWorked << endl;
  cout << "Salary: $" << wages << endl;

  return 0;
}
