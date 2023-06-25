/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:11:44 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/25 21:26:37 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Zombie.hpp"

int	main() {

	// Zombie zombieStack( "Grisha" );
	std::string zombieStackName;
	std::cout << "Create Zombie on the stack with the name: ";
	std::cin >> zombieStackName;
	
	Zombie zombieStack( zombieStackName);

	Zombie* zombieHeap;
	std::string zombieHeapName;
	std::cout << "Create Zombie on the heap with the name: ";
	std::cin >> zombieHeapName;
	
	zombieHeap = newZombie( zombieHeapName );

	zombieStack.announce();
	zombieHeap->announce();

	std::string randomChumpName;
	std::cout << "Create Zombie randomChump with the name: ";
	std::cin >> randomChumpName;
	
	randomChump( randomChumpName );
	
	delete zombieHeap;

	return 0;
}
