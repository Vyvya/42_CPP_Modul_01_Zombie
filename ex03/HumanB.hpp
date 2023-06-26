/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 00:11:45 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/26 21:13:48 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
	
	private:

		std::string	_name;
		Weapon* _weapon;
		
	public:

		HumanB( std::string	name );
		~HumanB();
	
	void setWeapon( Weapon& weapon);
	void attack();
	
};

#endif