#include <iostream>

using namespace std;

int main()
{
    double milesPerGallon, tankCapacity;
    
    cout << "Tank capacity: ";
    cin >> tankCapacity;
    
    cout << "Miles per gallon: ";
    cin >> milesPerGallon;
    
    cout << "You can drive " 
         << tankCapacity * milesPerGallon 
         << " miles on a full tank." << endl;
    
    return 0;
}