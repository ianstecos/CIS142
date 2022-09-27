#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  double studyHours;
  
  cout << "Enter name: ";
  cin >> name;

  cout << "Enter study hours:";
  cin >> studyHours;

  cout << "Hello, "<< name << "! On Saturday, you need to study " << studyHours << " hours for the exam.";

  return 0;
}
