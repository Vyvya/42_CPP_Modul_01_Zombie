#ifndef CLASS_ZOMBIE_HPP
# define CLASS_ZOMBIE_HPP

#include <iostream>
#include <string>

// Zombie* newZombie(std::string name);
// void randomChump(std::string name);

class Zombie {


	public:
		
		Zombie(std::string name);
		~Zombie();

		void announce( void );	

	private:

		std::string _name;

};

#endif