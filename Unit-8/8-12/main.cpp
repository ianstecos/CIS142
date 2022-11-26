/*
Programming Exercise 8-12
Author: Cosmin Iancu

Instructions

Summary
Jason, Samantha, Ravi, Sheila, and Ankit are preparing for an upcoming 
marathon. Each day of the week, they run a certain number of miles and write 
them into a notebook. At the end of the week, they would like to know the 
number of miles run each day and average miles run each day.

Instructions
Write a program to help them analyze their data. Your program must contain 
parallel arrays: an array to store the names of the runners and a 
two-dimensional array of five rows and seven columns to store the number of 
miles run by each runner each day. Furthermore, your program must contain at 
least the following functions:

a function to read and store the runners’ names and the numbers of miles run 
each day;
a function to calculate the average number of miles run each day;
and a function to output the results. (You may assume that the input data is 
stored in a file and each line of data is in the following form: runnerName 
milesDay1 milesDay2 milesDay3 milesDay4 milesDay5 milesDay6 milesDay7.)
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

#define MAX_NAMES 5
#define MAX_DAYS 6

void getData(ifstream &file, string names[MAX_NAMES], string runData[MAX_NAMES][MAX_DAYS])
{

  if (file.is_open())
  {
    string line, token;
    char delimiter = ' ';
    int i = 0, cursorPosition;

    while (getline(file, line))
    {
      cursorPosition = line.find(delimiter);
      token = line.substr(0, cursorPosition);
      names[i] = token;
      line.erase(0, cursorPosition + 1);

      for (int j = 0; j < MAX_DAYS; j++)
      {
        cursorPosition = line.find(delimiter);
        token = line.substr(0, cursorPosition);
        runData[i][j] = token;
        line.erase(0, cursorPosition + 1);
      }
      i++;
    }
    file.close();
  }
}

void printToFile(string names[MAX_NAMES], string runData[MAX_NAMES][MAX_DAYS])
{
  ofstream fileOut("data.txt");
  double miles = 0, totalMiles = 0, averageMiles = 0;

  fileOut << fixed << showpoint << setprecision(2);
  fileOut << "Name ";

  for (int day = 1; day < MAX_DAYS; day++)
  {
    fileOut << "Day " << day << ' ';
  }

  fileOut << endl;

  for (int i = 0; i < MAX_NAMES; i++)
  {
    totalMiles = 0;
    averageMiles = 0;

    fileOut << names[i] << ' ';

    for (int j = 0; j < MAX_DAYS; j++)
    {
      miles = stod(runData[i][j]);
      totalMiles += miles;

      fileOut << miles << ' ';

      if (j + 1 == MAX_DAYS)
      {
        averageMiles = round(totalMiles / MAX_DAYS);
        fileOut << averageMiles << endl;
      }
    }
  }
};

void printToConsole(string names[MAX_NAMES], string runData[MAX_NAMES][MAX_DAYS], int index)
{
  double miles = 0;
  cout << fixed << showpoint << setprecision(2);

  cout << "Name ";
  for (int day = 1; day <= MAX_DAYS; day++)
  {
    cout << "Day " << day << ' ';
  }

  cout << endl;
  cout << names[index] << ' ';

  for (int i = 0; i < MAX_DAYS; i++)
  {
    miles = stod(runData[index][i]);
    cout << miles << ' ';
  }

  cout << endl;
}

int main()
{
  ifstream file("ch8_Ex12Data.txt");
  string names[MAX_NAMES] = {};
  string runData[MAX_NAMES][MAX_DAYS] = {};

  getData(file, names, runData);
  printToConsole(names, runData, 0);
  printToConsole(names, runData, 2);

  return 0;
}
