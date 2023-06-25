/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:13:01 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/25 21:30:32 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string randName() {

	const int charMaxNum = 6;

	// char alphaBig[charMaxNum] = { 'Z', 'O', 'M', 'B', 'I', 'E' };
	char alphaSmall[charMaxNum] = { 'z', 'o', 'm', 'b', 'i', 'e' };

	std::string resultRand = "";

	// resultRand = alphaBig[rand() % charMaxNum];
	resultRand = 'Z';
	for( int i = 0; i < 6; i++ ) {

		resultRand = resultRand + alphaSmall[rand() % charMaxNum]; 
	}

	return resultRand;
}

Zombie*    zombieHorde( int N, std::string name ) {

	Zombie* zombieArray = new Zombie[N];

	for( int i = 0; i < N; i++) {

		// name = randName();
		zombieArray[i] = Zombie( name );
	}

	return zombieArray;
}