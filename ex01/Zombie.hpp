#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

Zombie*    zombieHorde( int N, std::string name );

Class Zombie {

	public:

		Zombie(std::string name);
		~Zombie();

	int numZombie;

	void announce(std:string name);

	private:

		std:string _name;
}

#endif