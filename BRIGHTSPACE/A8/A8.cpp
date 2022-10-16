#include <iostream>
using namespace std;

int cars(int, int, int);

int main() {
  cout << cars(88, 37, 12) << endl;

  return 0;
}

int cars(int wheels, int carBodies, int figurines) {
  int cars = 0;

    int wheelsSets = wheels / 4;
    int carBodiesSets = carBodies / 1;
    int figurinesSets = figurines / 2;

    if (wheelsSets <= carBodiesSets && wheelsSets <= figurinesSets ) {
        cars = wheelsSets;   
    } else if (carBodiesSets <= wheelsSets && carBodiesSets <= figurinesSets){
        cars = carBodiesSets;
    } else {
        cars = figurinesSets;
    } 

  return cars;
}