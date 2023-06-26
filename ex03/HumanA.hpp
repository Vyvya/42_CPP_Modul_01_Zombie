/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 00:12:55 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/26 16:53:54 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {

	private:

		std::string	_name;
		Weapon& _weapon;
		
	public:

		HumanA(std::string name, Weapon& weapon);
		~HumanA();
	
	void attack();
	
};

#endif