/* 

A room has one door, two windows, and a built-in bookshelf and it needs to 
be painted. Suppose that one gallon of paint can paint 120 square feet.

Write a program that prompts the user to input (in feet):

The length and width of the door
The length and width of each window
The length and width of the bookshelf
The length, width, and height of the room
The area that can be painted with one gallon of paint

The program outputs:

The amount of paint needed to paint the walls of the room.

*/

#include <iostream>

using namespace std;

int main()
{
  double doorLength, doorWidth;
  double firstWindowLenght, firstWindowWidth, secondWindowLenght, secondWindowWidth;
  double bookshelfLenght, bookshelfWidth;
  double roomLength, roomWidth, roomHeight;
  double wallsArea, doorArea, bookshelfArea, windowsArea, totalArea, paintAmount, areaPerGallon;

  cout << "Door length (ft): ";
  cin >> doorLength;

  cout << "Door width (ft): ";
  cin >> doorWidth;

  cout << "First window length (ft): ";
  cin >> firstWindowLenght;

  cout << "First window width (ft): ";
  cin >> firstWindowWidth;

  cout << "Second window length (ft): ";
  cin >> secondWindowLenght;

  cout << "Second window width (ft): ";
  cin >> secondWindowWidth;

  cout << "Bookshelf lenght (ft): ";
  cin >> bookshelfLenght;

  cout << "Bookshelf width (ft): ";
  cin >> bookshelfWidth;

  cout << "Room length (ft): ";
  cin >> roomLength;

  cout << "Room width (ft): ";
  cin >> roomWidth;

  cout << "Room height (ft): ";
  cin >> roomHeight;

  cout << "Area area that can be painted with one gallon of paint (ft): ";
  cin >> areaPerGallon;

  wallsArea = (roomWidth * roomHeight + roomLength * roomHeight) * 2;
  doorArea = doorWidth * doorLength;
  windowsArea = firstWindowLenght * firstWindowWidth + secondWindowLenght * secondWindowWidth;
  bookshelfArea = bookshelfWidth * bookshelfLenght;
  totalArea = wallsArea - doorArea - windowsArea - bookshelfArea;
  paintAmount = totalArea / areaPerGallon;

  cout << paintAmount << endl;
  return 0;
}
