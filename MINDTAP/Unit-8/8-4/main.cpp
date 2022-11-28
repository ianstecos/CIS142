/*
Programming Exercise 8-4
Author: Cosmin Iancu

Instructions
Write a program that reads a file consisting of students’ test scores in the 
range 0–200. It should then determine the number of students having scores in 
each of the following ranges:
0–24, 25–49, 50–74, 75–99, 100–124, 125–149, 150–174, and 175–200.
Output the score ranges and the number of students. (Run your program with the 
following input data:

76, 89, 150, 135, 200, 76, 12, 100, 150, 28, 178, 189, 167, 
200, 175, 150, 87, 99, 129, 149, 176, 
200, 87, 35, 157, 189

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  const int minValues[8] = {0, 25, 50, 75, 100, 125, 150, 175};
  const int maxValues[8] = {24, 49, 74, 99, 124, 149, 174, 200};

  int results[8] = {0, 0, 0, 0, 0, 0, 0, 0};

  ifstream file("Ch8_Ex4Data.txt");

  if (file.is_open())
  {
    string line, token;
    char delimiter = ' ';
    int index = 0, number = 0;

    while (getline(file, line))
    {
      line = line + " ";

      while ((index = line.find(delimiter)) != string::npos)
      {
        token = line.substr(0, index);
        number = stoi(token);

        for (int i = 0; i < 8; i++)
        {
          if ((number >= minValues[i]) && (number <= maxValues[i]))
          {
            results[i] += 1;
          }
        }

        line.erase(0, index + 1);
      }
    }
    file.close();
  }

  for (int i = 0; i < 8; i++)
  {
    cout << minValues[i] << " - "
         << maxValues[i] << " "
         << results[i] << endl;
  }

  return 0;
}
