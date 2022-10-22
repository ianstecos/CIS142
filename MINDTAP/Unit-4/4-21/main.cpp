/*

Programming Exercise 4-21
Author: Cosmin Iancu

Summary
Let l be a line in the x-y plane. If l is a vertical line, its equation is 
x = a for some real number a.

Suppose l is not a vertical line and its slope is m. Then the equation of l is 
y = mx + b, where b is the y-intercept.

If l passes through the point (x₀, y₀), the equation of l can be written as 
y - y₀ = m(x - x₀).

If (x₁, y₁) and (x₂, y₂) are two points in the x-y plane and x₁ ≠ x₂, the slope 
of line passing through these points is m = (y₂ - y₁)/(x₂ - x₁).

Instructions
Write a program that prompts the user for two points in the x-y plane. Input 
should be entered in the following order:

Input x₁
Input y₁
Input x₂
Input y₂

The program:

1. Outputs the equation of the line
2. Uses if statements to determine and output whether the line is vertical, 
horizontal, increasing, or decreasing.

If l is a non-vertical line, output its equation in the form y = mx + b.

Note: Output all numbers with a precision of two decimal places.

*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  double x1, x2, y1, y2, deltaX, deltaY, m, b;
  string lineType = "";

  cout << fixed << setprecision(2);

  cout << "x1 = ";
  cin >> x1;
  cout << endl;

  cout << "y1 = ";
  cin >> y1;
  cout << endl;

  cout << "x2 = ";
  cin >> x2;
  cout << endl;

  cout << "y2 = ";
  cin >> y2;
  cout << endl;

  deltaY = y2 - y1;
  deltaX = x2 - x1;

  m = deltaY / deltaX;
  b = y1 - m * x1;

  if (deltaX == 0) {
    lineType = "vertical";
  } else {
    if (m > 0) {
      lineType = "increasing";
    } else if (m < 0) {
      lineType = "decreasing";
    } else {
      lineType = "horizontal";
    }
  }

  if (lineType == "vertical") {
    cout << "x = " << x2 << " " << lineType << endl;
  } else {
    cout << "y = " << m << "x + " << b << " " << lineType << endl;
  }

  return 0;
}
