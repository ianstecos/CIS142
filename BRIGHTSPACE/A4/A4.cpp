#include <iostream>
using namespace std;

int main() {
  int n = 10;
  cout << "n \t" << "n^2" << endl;

  for (int i = 1; i <= n; i++) {
    cout << i << "\t" << i * i << endl;
  }
}