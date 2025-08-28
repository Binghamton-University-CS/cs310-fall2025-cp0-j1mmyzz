#include <iostream> 
#include <stdlib.h>
#include "AnimalsInZoo.h"
#include "Animal.h"

AnimalsInZoo::AnimalsInZoo(Animal a){
	animal = a;
	numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo(){
	animal = Animal();
	numAnimals = 0;
}

void AnimalsInZoo::display(){
	std::cout << numAnimals << std::endl;
	if (numAnimals > 0){
		animal.display();
	}
}

