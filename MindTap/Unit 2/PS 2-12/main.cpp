#include <iostream>

using namespace std;

int main() {
  int time;
  double hours, minutes, seconds;

  cout << "Elapsed time (s): ";
  cin >> time;

  hours = time / 3600;
  minutes = (time % 3600) / 60;
  seconds = time % 60;

  cout << hours << ":" << minutes << ":" << seconds << endl;

  return 0;
}
