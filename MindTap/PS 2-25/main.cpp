#include <iostream>

using namespace std;

int main() {
    const double PI = 3.1416;
    double wireLength, radius, area;

    cin >> wireLength;

    radius = wireLength / (2 * PI);
    area = PI * radius * radius;

    cout << radius << endl;
    cout << area << endl;

    return 0;
}
