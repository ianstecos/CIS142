#include <iostream>
#include <cmath> // cmath or math.h is needed to use pow(base, exponent)

using namespace std;

int main() {
  int n = 10;
  cout << "n \t" << "n^2" << endl;

  for (int i = 1; i <= n; i++) {
    cout << i << "\t" << pow(i, 2) << endl;
  }
}