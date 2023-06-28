/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:14:23 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/27 22:55:38 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {

	Harl harl;

	harl.complain( "DEBUG" );
	harl.complain( "" );
	harl.complain( "INFO" );
	harl.complain( "BLA" );
	harl.complain( "WARNING" );
	harl.complain( "0" );
	harl.complain( "ERROR" );
	harl.complain( "1234" );
	harl.complain( "DEBUGERROR" );

	return 0;
}