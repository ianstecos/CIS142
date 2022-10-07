/*

Programming Exercise 2-2
Author: Cosmin Iancu

Instructions
Write a program that produces the following output:

CCCCCCCCC       ++              ++
CC              ++              ++
CC        ++++++++++++++  +++++++++++++++
CC        ++++++++++++++  +++++++++++++++
CC              ++              ++
CCCCCCCCC       ++              ++

Note: The letter C in the output must be uppercase.

*/

#include <iostream>

using namespace std;

int main()
{
    cout << "CCCCCCCCC       ++              ++" << endl
         << "CC              ++              ++" << endl
         << "CC        ++++++++++++++  +++++++++++++++" << endl
         << "CC        ++++++++++++++  +++++++++++++++" << endl
         << "CC              ++              ++" << endl
         << "CCCCCCCCC       ++              ++";
    return 0;
}
