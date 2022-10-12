#include <iostream>

using namespace std;
int hoursToSeconds(int);

int main()
{
  cout << hoursToSeconds(2) << endl;
  cout << hoursToSeconds(10) << endl;
  cout << hoursToSeconds(24) << endl;

  return 0;
}

int cars(int hours)
{
  return (hours * 3600);
}