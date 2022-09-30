/*
Instructions
A room has one door, two windows, and a built-in bookshelf and it needs to be
painted. Suppose that one gallon of paint can paint 120 square feet.

Write a program that prompts the user to input the length and width (in feet) of:

The door
Each window
The bookshelf
And the length, width, and height of the room.
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
    double wallsArea, doorArea, bookshelfArea, windowsArea, totalArea, paintAmount;

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

    wallsArea = (roomWidth * roomHeight + roomLength * roomHeight) * 2;
    doorArea = doorWidth * doorLength;
    windowsArea = firstWindowLenght * firstWindowWidth + secondWindowLenght * secondWindowWidth;
    bookshelfArea = bookshelfWidth * bookshelfLenght;
    totalArea = wallsArea - doorArea - windowsArea - bookshelfArea;
    paintAmount = totalArea / 120;

    cout << paintAmount << endl;

    return 0;
}
