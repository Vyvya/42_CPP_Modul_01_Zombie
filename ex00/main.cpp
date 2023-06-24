#include "Class.Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump( std::string name );

int	main() {

	// Zombie zombieStack( "Grisha" );
	std::string str;
	std::cin >> str;

	Zombie zombieStack( str);

	Zombie* zombieHeap;
	zombieHeap = newZombie( "Boo" );
	// std::cin >> zombieHeap;

	zombieStack.announce();
	zombieHeap->announce();

	randomChump( "Da" );
	delete zombieHeap;

	return 0;
}
