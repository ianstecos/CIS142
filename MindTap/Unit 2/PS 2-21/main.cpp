#include <iostream>

using namespace std;

int main() {
    float m1, m2, d, f;
    const float K = 0.0000000667;

    cin >> m1;
    cin >> m2;
    cin >> d;

    f = K * ((m1 * m2) / (d * d));

    cout << f << endl;
    return 0;


}
