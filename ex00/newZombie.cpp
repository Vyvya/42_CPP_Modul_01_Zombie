/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:11:49 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/25 20:11:50 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Zombie.hpp"

Zombie* newZombie( std::string arg ) {

	Zombie* newZombie = new Zombie( arg );

	return newZombie;
}
