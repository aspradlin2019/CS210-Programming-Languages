#include <iostream>
#include<string>
#include "Dog.h"

using namespace std;

int main() {

	string petName, dogName, dogBreed;
	int petAge, dogAge;

	// Create a generic pet
    getline(cin, petName);
    cin >> petAge;
    cin.ignore();
    
    Pet myPet;
    myPet.SetName(petName);
    myPet.SetAge(petAge);

    // Create a dog pet
    getline(cin, dogName);
    cin >> dogAge;
    cin.ignore();
    getline(cin, dogBreed);

    Dog myDog;
    myDog.SetName(dogName);
    myDog.SetAge(dogAge);
    myDog.SetBreed(dogBreed);

    // Print generic pet information
    myPet.PrintInfo();

    // Print dog pet information and breed
    myDog.PrintInfo();
    cout << "   " << "Breed: " << myDog.GetBreed() << endl;

    return 0;
}
