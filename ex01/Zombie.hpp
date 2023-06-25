#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:

		Zombie( std::string name = "" );
		~Zombie();

	int numZombie;

	void announce( void );

	private:

		std::string _name;
};

Zombie*    zombieHorde( int N, std::string name );
std::string randName();

#endif