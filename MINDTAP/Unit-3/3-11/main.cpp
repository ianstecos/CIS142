/*

Programming Exercise 3-11
Author: Cosmin Iancu

Instructions
A size of a jumbo candy bar with rectangular shape is l x w x h. Due to rising
costs of cocoa, the volume of the candy bar is to be reduced by p%.

To accomplish this, the management decided to keep the height of the candy bar
the same, and reduce the length and width by the same amount.

For example, if l = 12, w = 7, h = 3, and p = 10, then the new dimension of the
candy bar is 11.39 x 6.64 x 3.

Below is an example of how the completed program should work:

Enter the length, width, and height of the candy bar separated by space(s):
12 7 3

Enter the amount of the reduced volume as a percentage: 10

The new dimensions of the candy bar is: 11.38 x 6.64 x 3.00

Format your output with setprecision(2) to ensure the proper number of decimals
for testing!

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double l, w, h, p;

  cout << "Enter the length, width, and height of the candy bar separated by space(s): ";
  cin >> l >> w >> h;

  cout << "Enter the amount of the reduced volume as a percentage: ";
  cin >> p;

  /* The volume of a rectangular parallelepiped is l * w * h. If h is constant,
  and l and w is reduced by the same amount, then the new l or w is
  l = l * sqrt(1 - (p / 100)) */
  l *= sqrt(1 - (p / 100));
  w *= sqrt(1 - (p / 100));

  cout << "The new dimensions of the candy bar is: "
       << setprecision(2) << fixed << l << " x "
       << setprecision(2) << fixed << w << " x "
       << h << endl;

  return 0;
}