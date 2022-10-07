/*

Programming Exercise 2-14
Author: Cosmin Iancu

Summary
If you buy a 40 GB hard drive, then chances are that the actual storage on the
hard drive is not 40 GB. This is due to the fact that, typically, a
manufacturer uses 1,000 bytes as the value of 1K bytes, 1,000 K bytes as the
value of 1 MB, 1,000 MB as the value of 1 GB. Therefore, a 40 GB hard drive
contains 40,000,000,000 bytes.

However, in computer memory, as given in Table 1-1 (Chapter 1), 1 KB is equal
to 1,024 bytes, and so on. So the actual storage on a 40 GB hard drive is
approximately 37.25 GB. (You might like to read the fine print next time you
buy a hard drive.)

Instructions
Write a program that:

1. Prompts the user to enter the size of the hard drive specified by the
   manufacturer, on the hard drive box.
2. Outputs the actual storage capacity of the hard drive.

*/

#include <iostream>

using namespace std;

int main()
{
    double value, gigaBytes, megaBytes, kiloBytes, bytes;

    cin >> value;

    bytes = value * 1000000000;
    kiloBytes = bytes / 1024;
    megaBytes = kiloBytes / 1024;
    gigaBytes = megaBytes / 1024;

    cout << gigaBytes;
    cout << endl;

    return 0;
}
