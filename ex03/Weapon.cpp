/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:36:25 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/26 21:38:15 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	
	std::cout << "Constructor called Weapon without _type" << std::endl;
}

Weapon::Weapon( std::string str ) : _type(str) {
	
	std::cout << "Constructor called Weapon" << std::endl;
}

Weapon::~Weapon() {
	
	std::cout << "Destructor called Weapon" << std::endl;
}

void Weapon::setType( std::string const& weaponType ) {

	this->_type = weaponType;
	
		std::cout << "<< New weapon type set: " << this->_type << " >>" << std::endl;
		
	return;
}

const std::string& Weapon::getType() const {
	
	return this->_type;
}
