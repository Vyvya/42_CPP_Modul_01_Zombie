/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:12:57 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/25 20:12:58 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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