/*

Programming Exercise 2-21
Author: Cosmin Iancu

Summary
Newton’s law states that the force, F, between two bodies of masses M1 and M2
is given by: Newton's Law in which k is the gravitational constant and d is the
distance between the bodies. The value of k is approximately 6.67 X 10-8 dyn.
cm²/g² .

Instructions
Write a program that prompts the user to input:

1. The masses of the bodies
2. The distance between the bodies.

The program then outputs:

1. The force between the bodies.

Your program should be able to work with decimals.

*/

#include <iostream>

using namespace std;

int main()
{
    float m1, m2, d, f;
    const float K = 0.0000000667;

    cin >> m1;
    cin >> m2;
    cin >> d;

    f = K * ((m1 * m2) / (d * d));

    cout << f << endl;
    return 0;
}
