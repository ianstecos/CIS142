/*

Programming Exercise 3-2
Author: Cosmin Iancu

Instructions
Consider the following program in which the statements are in the incorrect 
order.

Rearrange the statements in the following order so that the program prompts the 
user to input:

The height of the base of a cylinder
The radius of the base of a cylinder
The program then outputs (in order):

The volume of the cylinder.
The surface area of the cylinder
Format the output to two decimal places.

#include <iomanip>
 
#include <cmath>
 
int main()
 
{}
 
double height;
 
cout << "Volume of the cylinder = "
 
<< PI * pow(radius, 2.0) * height << endl;
 
cout << "Enter the height of the cylinder: ";
 
cin >> radius;
 
cout << endl;
 
return 0;
 
double radius;
 
cout << "Surface area: "
 
<< 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
 
<< endl;
 
cout << fixed << showpoint << setprecision(2);
 
cout << "Enter the radius of the base of the cylinder: ";
 
cin >> height;
 
cout << endl;
 
#include <iostream>
 
const double PI = 3.14159;
 
using namespace std;

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  double height;
  double radius;
  const double PI = 3.14159;

  cout << "Enter the height of the cylinder: ";
  cin >> height;
  cout << endl;

  cout << "Enter the radius of the base of the cylinder: ";
  cin >> radius;
  cout << endl;

  cout << fixed << showpoint << setprecision(2);
  cout << "Volume of the cylinder = " << PI * pow(radius, 2.0) * height << endl;
  cout << "Surface area: "
       << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
       << endl;

  return 0;
}