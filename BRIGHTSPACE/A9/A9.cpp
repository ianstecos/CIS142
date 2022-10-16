/*

Develop a function that will accept a string and report how many vowels there
are in the string. The function should return an integer and accept a character
string. You are only writing a function; the function should not prompt the
user for input.

countVowels(“This is the time for all men”) => 8
countVowels(“Golden Eye”) = > 4
countVowels(“Monday”) => 2

Usage:
cout << “Number of vowels” << countVowels(“Mission”) << endl;

or

int numOfVowels = 0;
numberOfVowels = countVowels(“Mission”)

*/

#include <iostream>
#include <string>
using namespace std;

int countVowels(string text)
{
  int counter = 0;

  for (int i = 0; i <= text.length(); i++)
  {

    switch (toupper(text[i]))
    {
    case 'A':
      counter++;
      break;
    case 'E':
      counter++;
      break;
    case 'I':
      counter++;
      break;
    case 'O':
      counter++;
      break;
    case 'U':
      counter++;
      break;
    default:
      break;
    }
  }

  return counter;
}

int main()
{
  string text;
  int vowels = 0;

  cout << "Enter text: ";
  getline(cin, text);

  vowels = countVowels(text);

  cout << "Total vowels counted: " << vowels << endl;

  return 0;
}