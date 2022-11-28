/*
Programming Exercise 8-6
Author: Cosmin Iancu

Instructions
The history teacher at your school needs help in grading a True/False test. 
The students’ IDs and test answers are stored in a file. The first entry in the 
file contains answers to the test in the form:

TFFTFFTTTTFFTFTFTFTT
Every other entry in the file is the student ID, followed by a blank, followed 
by the student’s responses. For example, the entry:

ABC54301 TFTFTFTT TFTFTFFTTFT

indicates that the student ID is ABC54301 and the answer to question 1 is True, 
the answer to question 2 is False, and so on. This student did not answer 
question 9. The exam has 20 questions, and the class has more than 150
students. Each correct answer is awarded two points, each wrong answer gets one 
point deducted, and no answer gets zero points.

Write a program that processes the test data. The output should be the 
student’s ID, followed by the answers, followed by the test score, followed by 
the test grade. Assume the following grade scale:
90%–100%, A; 80%–89.99%, B; 70%–79.99%, C; 60%–69.99%, D; and 0%–59.99%, F

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  //   const double TOTAL_QUESTIONS = 20;
  //   const double MAX_SCORE = 40;

  ifstream file("Ch8_Ex6Data.txt");

  if (file.is_open())
  {
    string line, answers, studentId, studentAnswers;
    double studentScore = 0, studentScorePercentage = 0;
    char studentGrade = ' ';

    getline(file, answers);

    while (getline(file, line))
    {
      studentScore = 0;
      studentScorePercentage = 0;

      studentId = line.substr(0, 8);
      studentAnswers = line.erase(0, 9);

      for (int i = 0; i < studentAnswers.length(); i++)
      {
        if (studentAnswers[i] != ' ')
        {
          if (studentAnswers[i] == answers[i])
          {
            studentScore += 2;
          }
          else
          {
            studentScore -= 1;
          }
        }
      }

      studentScorePercentage = (studentScore / 40) * 100;

      if ((studentScorePercentage >= 90))
      {
        studentGrade = 'A';
      }
      else if ((studentScorePercentage >= 80) && (studentScorePercentage < 90))
      {
        studentGrade = 'B';
      }
      else if ((studentScorePercentage >= 70) && (studentScorePercentage < 80))
      {
        studentGrade = 'C';
      }
      else if ((studentScorePercentage >= 60) && (studentScorePercentage < 70))
      {
        studentGrade = 'D';
      }
      else if ((studentScorePercentage >= 0) && (studentScorePercentage < 60))
      {
        studentGrade = 'F';
      }

      cout << studentId << ' '
           << studentAnswers << ' '
           << studentScore << ' '
           << studentGrade << endl;
    }
    file.close();
  }

  return 0;
}
