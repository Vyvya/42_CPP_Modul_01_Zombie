#include "Zombie.hpp"

int	getNumZombie() {

	std::cout << "Hello Z World" << std::endl << std::endl;
	std::cout << "How many Zombies do you see?" << std::endl;
	
	int num;
	std::cin >> num;
	std::cout << std::endl;

	return num;
}

void announce() {

	
}

int main() {

	int num( getNumZombie() );
	std::string name;

	Zombie* zombieArray = zombieHorde( num, name);
	
	std::cout << "Identification process Zombie Horde:" << std::endl << std::endl;
	//accessing the name of the Zoombie objects
	for( int i = 0; i < num; i++ ) {

		zombieArray[i].announce();
	}

	delete[] zombieArray;
	return 0;
}
