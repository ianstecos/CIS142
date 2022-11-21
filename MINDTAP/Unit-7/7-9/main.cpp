/*
Programming Exercise 7-9
Author: Cosmin Iancu

Instructions

You are given a file consisting of students’ names in the following form: 
lastName, firstName middleName. (Note that a student may not have a middle 
name.)

Write a program that converts each name to the following form: firstName 
middleName lastName. Your program must read each student’s entire name in a 
variable and must consist of a function that takes as input a string, consists 
of a student’s name, and returns the string consisting of the altered name to 
print to the terminal. Use the string function find to find the index of ,; the 
function length to find the length of the string; and the function substr to 
extract the firstName, middleName, and lastName.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ifstream file("Ch7_Ex9Data.txt");

  if (file.is_open())
  {
    string line;
    string firstName, middleName, lastName;
    ofstream fileOut("data.txt");
    int index;

    while (getline(file, line))
    {
      index = line.find(',');
      lastName = line.substr(0, index);
      line.erase(0, index + 2);

      index = line.find(' ');
      firstName = line.substr(0, index);
      line.erase(0, index + 1);

      middleName = line;

      fileOut << firstName << " " << middleName << " " << lastName << endl;
      cout << firstName << " " << middleName << " " << lastName << endl;
    }

    file.close();
  }
  return 0;
}
