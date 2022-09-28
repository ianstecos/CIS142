#include <iostream>

using namespace std;

int main() {
    double wireLength, pictureLenght, pictureWidth;

    cin >> wireLength;

    pictureWidth = wireLength / 5;
    pictureLenght = pictureWidth * 1.5;

    cout << pictureLenght << endl;
    cout << pictureWidth << endl;

    return 0;
}
