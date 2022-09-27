#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3, num4, num5, sum; 

    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    sum = num1 + num2 + num3 + num4 + num5;
    cout << int(sum + 0.5) << endl;

    return 0;
}
