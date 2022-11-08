/*
Programming Exercise 6-2
Author: Cosmin Iancu

Instructions
Write a value-returning function, isVowel, that returns the value true if a
given caracter is a vowel and otherwise returns false.

For the input E, your output should look like the following:

E is a vowel: 1

When printing the value of a bool, true will be displayed as 1 and false will
be displayed as 0.
*/

#include <iostream>

using namespace std;

bool isVowel(char c);

int main()
{
  char c;
  cin >> c;
  cout << c << " is a vowel: " << isVowel(c) << endl;
  return 0;
}

bool isVowel(char c)
{
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
      c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
  {
    return true;
  }
  else
  {
    return false;
  }
}