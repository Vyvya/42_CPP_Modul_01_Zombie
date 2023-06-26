/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:37:06 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/26 16:54:11 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {
	
	std::cout << "Constructor called HumanA" << std::endl;
}

HumanA::~HumanA() {
	
	std::cout << "Destructor called HumanA" << std::endl;
}

void HumanA::attack() {
	
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}