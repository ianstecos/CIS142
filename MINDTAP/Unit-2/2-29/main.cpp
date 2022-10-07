/*

Programming Exercise 2-29
Author: Cosmin Iancu

Instructions
A contractor orders, say, 30 cubic yards of premixed concrete to construct a
patio that is to be, say, four inches thick. The length of the patio is to be,
say, twice the width.

Write a program that prompts the user to specify:

1. The amount of premixed concrete (in cubic yards) ordered
2. The thickness of the patio (in inches)
3. The ratio of length and width
   - Ex. If the ratio is 3 to 2, have the program accept a 3 then a 2. Then
   compute the ratio using these numbers

The program then outputs:

1. The length and width of the patio (in feet). (1 cubic yard = 27 cubic feet.)

To calculate the width, you will need to:

1. Find the total cubic feet of the concrete
2. Divide the total cubic feet of concrete by the result of the length to width
   ratio multiplied by the thickness of the patio, over 12 (inches in a foot)
3. Square root the answer

To find the square root of a decimal number, include the header file cmath
using the statement #include <cmath>, in your program.

The function sqrt, included in this header file, determines the square root of
a decimal number. For example, sqrt(16.0) = 4.0.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double concreteAmount, thicknessInches, thicknessFeet, patioWidth, patioLength, ratio;
  double ratio1, ratio2;

  cout << "The amount of premixed concrete (in cubic yards) ordered: ";
  cin >> concreteAmount;

  cout << "The thickness of the patio (in inches): ";
  cin >> thicknessInches;

  cout << "Enter ratio: ";
  cin >> ratio1 >> ratio2;

  ratio = ratio1 / ratio2;
  thicknessFeet = thicknessInches / 12;
  patioWidth = sqrt(concreteAmount * 27 / (ratio * thicknessFeet));
  patioLength = patioWidth * ratio;

  cout << "Patio width (ft): " << patioWidth << endl;
  cout << "Patio length (ft): " << patioLength << endl;

  return 0;
}
