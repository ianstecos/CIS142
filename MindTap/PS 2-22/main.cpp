#include <iostream>

using namespace std;

int main() {
    const int METRIC_TON = 2205;
    double riceAmount;
    int bagsNumber;

    cout << "Amount of rice (lb) per bag: ";
    cin >> riceAmount;

    bagsNumber = int(METRIC_TON / riceAmount);

    cout << "Number of bags: " << bagsNumber << endl;

    return 0;
}
