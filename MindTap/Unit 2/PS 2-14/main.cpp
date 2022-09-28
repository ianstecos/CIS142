#include <iostream>

using namespace std;

int main() {
    double value, gigaBytes, megaBytes, kiloBytes, bytes;

    cin >> value;

    bytes = value * 1000000000;
    kiloBytes = bytes / 1024;
    megaBytes = kiloBytes / 1024;
    gigaBytes = megaBytes / 1024;

    cout << gigaBytes;
    cout << endl;

    return 0;
}
