/*

Programming Exercise 2-5
Author: Cosmin Iancu

Instructions
Consider the following C++ program in which the statements are in the incorrect
order.

Rearrange the statements so that it prompts the user to input the radius of a
circle and outputs the area and circumference of the circle.

#include <iostream>
 
{
 
int main()
 
cout << "Enter the radius: ";
 
cin >> radius;
 
cout << endl;
 
double radius;
double area;
 
using namespace std;
 
return 0;
 
cout << "Area = " << area << endl;
 
area = PI * radius * radius;
 
circumference = 2 * PI * radius;
 
cout << "Circumference = " << circumference << endl;
 
const double PI = 3.14;
 
double circumferenc

*/

#include <iostream>

using namespace std;

int main()
{
  double radius;
  double area;
  double circumference;
  const double PI = 3.14;

  cout << "Enter the radius: ";
  cin >> radius;
  cout << endl;

  area = PI * radius * radius;
  circumference = 2 * PI * radius;

  cout << "Area = " << area << endl;
  cout << "Circumference = " << circumference << endl;

  return 0;
}