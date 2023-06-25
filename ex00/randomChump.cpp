/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:11:54 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/25 21:25:02 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Zombie.hpp"

void randomChump( std::string name ) {

	Zombie randomChump( name );
	randomChump.announce();

}