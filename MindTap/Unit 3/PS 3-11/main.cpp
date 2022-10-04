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