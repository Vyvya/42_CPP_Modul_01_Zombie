/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Zombie.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:11:31 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/25 20:11:32 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Zombie.hpp"

Zombie::Zombie( std::string name ) {

	std::cout << "Constructor called" << std::endl;
	this->_name = name;
	std::cout << "Zombie object " << this->_name << " was created" << std::endl;

}

Zombie::~Zombie() {

	std::cout << "Destructor called on " << "Zombie " << this->_name << std::endl;
}

void Zombie::announce() {

	std::cout<< this-> _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	
}