/*
Programming Exercise 8-7
Author: Cosmin Iancu

Instructions

Write a program that allows the user to enter the last names of five candidates 
in a local election and the number of votes received by each candidate. The 
program should then output each candidate’s name (Candidate), the number of 
votes received (Votes Received), and the percentage of the total votes received 
by the candidate (% of Total Votes). Your program should also output the winner 
of the election.

Your program must contain at least the following functions:

a function to determine the sum of votes.
a function to output the winner of the election.
A sample output is:

Candidate	Votes Received	% of Total Votes
Johnson	5000	25.91
Miller	4000	20.73
Duffy	6000	31.09
...	...	...
Total Votes:	19300
The Winner of the Election is Duffy

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int getWinnerIndex(int votes[], int size);

// start main function
int main()
{
  // constant declaration
  // maximum size of the arrayh
  const int MAX = 5;

  // parallel arrays for names of candidates,
  // number of votes received, and percentage of votes
  string names[MAX];
  int votes[MAX];
  double percentages[MAX];

  // other variables
  double total = 0;
  int winnerIndex;
  string str;

  /* allow the user to enter the last names of five candidates in a local election and the number of votes received by each candidate */
  for (int i = 0; i < MAX; i++)
  {
    cout << "Candidate Name " << (i + 1) << ": ";
    getline(cin, names[i]);

    cout << "Votes received by " << names[i] << ": ";
    getline(cin, str);
    votes[i] = stoi(str);
  }

  // compute the total number of votes
  for (int i = 0; i < MAX; i++)
  {
    total = total + votes[i];
  }

  // compute the percentage of votes for each condidate
  for (int i = 0; i < MAX; i++)
  {
    percentages[i] = votes[i] / total * 100.0;
  }

  // get the winner index in the array by calling the getWinnerIndex function
  winnerIndex = getWinnerIndex(votes, MAX);

  /* display each candidate's name, the number of votes received, and the percentage of the total votes received by the candidate */
  cout << "Candidate Votes Received % of Total Votes";
  cout << endl
       << left 
       << setw(25) << "Candidate" 
       << right 
       << setw(15) << "Votes Received" 
       << setw(15) << "% of Total Votes" 
       << endl;
  for (int i = 0; i < MAX; i++)
  {
    cout << left 
         << setw(25) << names[i] 
         << right 
         << setw(15) << votes[i] 
         << setw(14) << setprecision(2) << fixed << percentages[i] << "%" << endl;
  }

  // display the winner of the election
  cout << "The Winner of the Election is " << names[winnerIndex] << endl
       << endl;

  return 0;
} // end of main function

// getWinnerIndex function implementation
int getWinnerIndex(int votes[], int size)
{
  int i, max, loc = 0;
  max = votes[0];

  for (i = 1; i < size; i++)
  {
    if (votes[i] > max)
    {
      max = votes[i];
      loc = i;
    }
  }

  return loc;
}
