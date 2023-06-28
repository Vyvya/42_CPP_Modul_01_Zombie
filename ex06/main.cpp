/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:14:23 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/28 20:08:37 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char** argv) {

	Harl harl;
	std::string blob = argv[1];
	enum level { DEBUG = 1,
					INFO = 2,
					WARNING = 3,
					ERROR = 4 };
	
	level complaintLevel;

	if( argc == 2) {

		std::transform( blob.begin(), blob.end(), blob.begin(), ::toupper );
		
		if( blob == "DEBUG" ) {
			complaintLevel = DEBUG;
		} else if( blob == "INFO" ) {
			complaintLevel = INFO;
		} else if( blob == "WARNING" ) {
			complaintLevel = WARNING;
		} else if( blob == "ERROR" ) {
			complaintLevel = ERROR;
		} else {

			std::cout << "Invalid choice" << std::endl;
			return 0;
		}
		
		switch ( complaintLevel ) {

			case DEBUG:
				harl.complain( "DEBUG" );
			case INFO:
				harl.complain( "INFO" );
			case WARNING:
				harl.complain( "WARNING" );
			case ERROR:
				harl.complain( "ERROR" );
			
		}
	}					

	return 0;
}
