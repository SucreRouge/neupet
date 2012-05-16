#include "World.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>


int main()
{
	
	srand(time(NULL));

	std::cout << "How many pets? ";
	int numPets;
	std::cin >> numPets;

	World world;
	world.generatePopulation(numPets);
	world.sprinklePlants(100);
	world.render();

	
	while(std::cin.get() != 'q'){

		const int stepsPerFrame = 1;
		for (int i = 0; i < stepsPerFrame; ++i) {
			world.step();
		}

		world.render();
	}

	return 0;
}