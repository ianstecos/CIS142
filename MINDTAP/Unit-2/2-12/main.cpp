/*

Programming Exercise 2-12
Author: Cosmin Iancu

Instructions
Write a C++ program that:

1. Prompts the user to input the elapsed time for an event in seconds.
2. Outputs the elapsed time in hours, minutes, and seconds.

(For example, if the elapsed time is 9,630 seconds, then the output is 2:40:30.)

*/

#include <iostream>

using namespace std;

int main()
{
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
