/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:34:00 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/26 22:50:40 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main() {
	
	std::ifstream fileToOpen;
	fileToOpen.open( "lyrics_Rene.txt" );

	// std::ifstream fileToOpen( "lyrics_Rene.txt" ); //equivalent
	
	//declare a string to hold the content
	std::string stringToHoldContent;

	//always check whether file is open
	if( fileToOpen.is_open() ) {

		while( fileToOpen.good() ) { //or while( fileToOpen )
			
			// fileToOpen >> stringToHoldContent; //pipes file's content into stream
			// std::cout << stringToHoldContent; //pipe stream's content to STDOUT
			std::getline ( fileToOpen, stringToHoldContent );
			std::cout << stringToHoldContent << std::endl;
		}
	} else {

		std::cout << "Error opening file" << std::endl;
	}

	return 0;
}