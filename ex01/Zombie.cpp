#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {

	// std::cout << "Constructor called" << std::endl;
	this->_name = name;
	// std::cout << "Zombie object " << this->_name << " was created" << std::endl;
}

Zombie::~Zombie() {

	// std::cout << "Destructor called" << std::endl;
}

void Zombie::announce() {

	std::cout << "Zombie ";
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}