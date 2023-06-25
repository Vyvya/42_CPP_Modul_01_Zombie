/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:12:53 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/25 20:12:54 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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