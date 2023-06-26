/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:43:40 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/26 21:40:00 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

	public:
	
		Weapon();
		Weapon( std::string str );
		~Weapon();

	
	const	std::string& getType() const;
	void	setType( std::string const& weaponType );

	private:

		std::string	_type;
};

#endif