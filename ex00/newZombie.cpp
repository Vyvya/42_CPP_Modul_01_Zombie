#include "Class.Zombie.hpp"

Zombie* newZombie( std::string arg ) {

	Zombie* newZombie = new Zombie( arg );

	return newZombie;
}
