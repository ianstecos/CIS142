/*
The Noah's Ark Inventory Application

The scenario is this: you are on Noah's ark with a set of animals. As the
months pass, the animals begin to breed. You need to keep track of your animal
inventory down below. The ark has 3 types of animals: mammals, birds, and fish.
Your program should have at least 2 kinds of mammals (cat, dog), 2 kinds of
fish (goldfish, shark), and 2 kinds of birds (eagle, parakeet).
You should start the program with 2 animals of each species on the ark, one male
and one female, for a total of 12 animals. The program should give you a menu
such as follows:

You have been on the ark for 11 months. Would you like to:
1 - Let another month pass
2 - Check inventory
3 - Quit

If you let another month pass, all of the animals on the ark are aged by a
month. Each female animal in heat gives birth to another animal of the same
species. You will then get the same menu:

You have been on the ark for 12 months. Would you like to:
1 - Let another month pass
2 - Check inventory
3 - Quit

If you choose 2, you should see something like this:

Animal #1: I am a female cat, 12 months old
Animal #2: I am a male cat, 12 months old
Animal #3: I am a male cat, 0 months old
Animal #4 I am a male shark, 12 months old
Animal #5: I am a female shark, 12 months old
Animal #6: I am a male shark, 6 months old
.........

All female mammals give birth once every 12 months. All female fish give birth
once every 6 months. All female birds give birth once every 9 months

*/

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

// Create Animal class
class Animal
{
public:
  int age = 1, birth_rate;
  string kind, sex;
  void update_age() { age++; }
  void show_details()
  {
    cout << "I am a " << sex << " " << kind << ", " << age << " months old. \n";
  }

  // Constructor
  Animal(string _kind, string _sex, int _birth_rate)
  {
    kind = _kind;
    sex = _sex;
    birth_rate = _birth_rate;
  }
};

int main()
{
  const int BIRTH_RATE_MAMMAL = 12;
  const int BIRTH_RATE_BIRDS = 9;
  const int BIRTH_RATE_FISHES = 6;
  int i, random_number, answer, months = 0;
  vector<Animal> animals;
  vector<string> sexes{"male", "female"};

  animals.push_back(Animal("cat", "male", BIRTH_RATE_MAMMAL));
  animals.push_back(Animal("cat", "female", BIRTH_RATE_MAMMAL));

  animals.push_back(Animal("dog", "male", BIRTH_RATE_MAMMAL));
  animals.push_back(Animal("dog", "female", BIRTH_RATE_MAMMAL));

  animals.push_back(Animal("shark", "male", BIRTH_RATE_FISHES));
  animals.push_back(Animal("shark", "female", BIRTH_RATE_FISHES));

  animals.push_back(Animal("goldfish", "male", BIRTH_RATE_FISHES));
  animals.push_back(Animal("goldfish", "female", BIRTH_RATE_FISHES));

  animals.push_back(Animal("eagle", "male", BIRTH_RATE_BIRDS));
  animals.push_back(Animal("eagle", "female", BIRTH_RATE_BIRDS));

  animals.push_back(Animal("parakeet", "male", BIRTH_RATE_BIRDS));
  animals.push_back(Animal("parakeet", "female", BIRTH_RATE_BIRDS));

  while (answer != 3)
  {
    cout << endl;
    cout << "You have been on the ark for " << months << " months. "
         << "Would you like to: \n"
         << "1 - Let another month pass \n"
         << "2 - Check inventory \n"
         << "3 - Quit \n";
    cout << endl;

    cout << "Your pick: ";
    cin >> answer;
    cout << endl;

    switch (answer)
    {
    case 1:
      months++;

      // loop through animals array and update each animals' age
      for (Animal &animal : animals)
      {
        animal.update_age();

        // Check if animal is ready to give birth
        if ((animal.sex == "female") && (animal.age % animal.birth_rate == 0))
        {

          srand(time(NULL)); // Randomize seed initialization
          random_number = rand() % 2;

          // Add one animal to the animals list with same kind, random sex, and same birth rate
          animals.push_back(Animal(animal.kind, sexes[random_number], animal.birth_rate));
        }
      }
      break;

    case 2:
      for (i = 0; i < animals.size(); i++)
      {
        cout << "Animal #" << i + 1 << ": ";
        animals[i].show_details();
      }
      break;

    default:
      break;
    }
  }

  return 0;
}
