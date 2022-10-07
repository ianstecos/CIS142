/*

Programming Exercise 2-8
Author: Cosmin Iancu

Instructions

1/13
Consider the following program segment:

//include statement(s)
//using namespace statement

int main()
{
   //variable declaration
   //executable statements
   //return statement
}

Write C++ statements that include the header files iostream and string

2/13
Write a C++ statement that allows you to use cin, cout, and endl without the
prefix std::.

3/13
Write C++ statements that declare and initialize the following named constants:
SECRET of type int initialized to 11 and RATE of type double initialized to
12.50.

4/13
Write C++ statements that declare the following variables: num1, num2, and
newNum of type int; name of type string; and hoursWorked and wages of type
double.

5/13
Write C++ statements that prompt the user to input two integers and store the
first number in num1 and the second number in num2.

6/13
Write a C++ statement(s) that outputs the values of num1 and num2, indicating
which is num1 and which is num2. For example, if num1 is 8 and num2 is 5, then
the output is:

...
The value of num1 = 8 and the value of num2 = 5.

7/13
1. Write a C++ statement that multiplies the value of num1 by 2, adds the value
   of num2 to it, and then stores the result in newNum.

2. Write a C++ statement that outputs the value of newNum.

...
The new value of newNum = 6

8/13
1. Write a C++ statement that updates the value of newNum by adding the value
   of the named constant SECRET to it.
2. Write a C++ statement that outputs the value of newNum with an appropriate
   message.

...
The new value of newNum = 17

9/13
Write C++ statements that prompt the user to enter a person’s last name and
then store the last name into the variable name.

...
Enter a last name: Smith

10/13
Write C++ statements that prompt the user to enter a decimal number between 0
and 70 and then store the number entered into hoursWorked.

...
Enter a decimal number between 0 and 70: 42.5

11/13
Write a C++ statement that multiplies the value of the named constant RATE with
the value of hoursWorked and then stores the result into the variable wages.

12/13
Write C++ statements that produce the following output:

Name:           //output the value of the variable name
Pay Rate: $     //output the value of the RATE
Hours Worked:   //output the value of the variable //hoursWorked
Salary: $       //output the value of the variable //wages
For example, if the value of name is Rainbow and hoursWorked is 45.50, then the
output is:

Name: Rainbow
Pay Rate: $12.50
Hours Worked: 45.50
Salary: $568.75

13/13
Test run your program (twice) on the following input data:

a. num1 = 13, num2 = 28; name ="Jacobson"; hours-Worked = 48.30.
b. num1 = 32, num2 = 15; name = "Crawford"; hours-Worked = 58.45.

To test your code, click the Run Code button in the bottom right of the
terminal window and enter the test data.

*/

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
