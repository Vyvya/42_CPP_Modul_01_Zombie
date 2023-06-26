/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 00:11:12 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/26 21:38:41 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(0) {
	
	std::cout << "Constructor called HumanB" << std::endl;
}

HumanB::~HumanB() {
	
	std::cout << "Destructor called HumanB" << std::endl;
}

void HumanB::setWeapon( Weapon& weapon ) {
	
	_weapon = &weapon;
	std::cout << "<< New weapon type set: " << _weapon->getType() << " >>" << std::endl;

	return;
}

void HumanB::attack() {

	if (_weapon) {
		
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
		
	} else {
		
		std::cout << _name << " no weapon no attacks " << std::endl;
		
	}
	
	return;
}
