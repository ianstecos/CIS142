#include <iostream>

using namespace std;

int main() {
    const double PI = 3.141593;
    double radius, price, area;

    cout << "Enter the radius of the pizza: ";
    cin >> radius;

    cout << "Enter the price of the pizza: ";
    cin >> price;

    area = PI * radius * radius;

    cout << "The price per square inch is: " << price / area << endl;
    
    return 0;
}
