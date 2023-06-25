/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Zombie.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:11:36 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/25 21:16:32 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_ZOMBIE_HPP
# define CLASS_ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:
		
		Zombie(std::string name);
		~Zombie();

		void announce( void );	

	private:

		std::string _name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif