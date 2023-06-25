/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:11:26 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/25 21:30:54 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	getNumZombie() {

	std::cout << "Hello Z World" << std::endl << std::endl;
	std::cout << "How many Zombies do you see?" << std::endl;
	
	int num;
	std::cin >> num;
	std::cout << std::endl;

	return num;
}

int main() {

	int num( getNumZombie() );
	// std::string name;
	std::string name = "CUCCI";

	Zombie* zombieArray = zombieHorde( num, name);
	
	std::cout << "Identification process Zombie Horde:" << std::endl << std::endl;
	//accessing the name of the Zoombie objects
	for( int i = 0; i < num; i++ ) {

		zombieArray[i].announce();
	}

	delete[] zombieArray;
	return 0;
}
