#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3, num4, num5, average;

    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;

    average = (num1 + num2 + num3 + num4 + num5) / 5;

    cout << "Your average test score is: " << average << endl;

    return 0;
}
