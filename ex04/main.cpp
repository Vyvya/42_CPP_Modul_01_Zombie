/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:34:00 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/27 20:55:52 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void replaceToNewFile() {

	std::ifstream infile ( "lyrics_Rene.txt" );
	
	std::ofstream outfile( "outfile_replaced.txt" );
	std::string buffer;
	// std::string s1;
	// std::string s2;
	std::string s1 ( "Took too long to get it (you got it)" );
	std::string s2 ( "BLa la la la la la la la..." ); //It didn't take too long to get it (you got it)
	
	
	if( infile && outfile && !s1.empty() && !s2.empty() ) {
 
		while( std::getline( infile, buffer ) ) {

			if( s1.compare( buffer ) != 0 ) {

				outfile << buffer << std::endl;
					
			} else {

				outfile << s2 << std::endl;
			}
		}
		
	} else if ( !infile ) {
		
		std::cout << "Error opening file" << std::endl;
		
	} else if ( !outfile ) {
		
		std::cout << "Error creating file" << std::endl;
		
	}  else {

		std::cout << "Error s1 & s2" << std::endl;
		
	}
	infile.close();
	outfile.close();
	return;
}

void writeToNewFile() {

	std::ifstream infile ( "lyrics_Rene.txt" );
	std::ofstream outfile ( "lyrics_copy.txt" );

	if( infile && outfile ) {

		std::string str;
		while( infile  ) {
			
			std::getline( infile, str );
			outfile << str << std::endl;
		}
		
		std::cout << "Finished writing to a new file" << std::endl << std::endl;
		
	} else if ( !infile ) {
		
		std::cout << "Error opening file" << std::endl;
		
	} else {
		
		std::cout << "Error creating file" << std::endl;
	}
	infile.close();
	outfile.close();
	return;
}

void readFile() {

	std::ifstream infile ( "lyrics_Rene.txt" );

	if( infile.is_open() ) {

		std::string str;
		while( infile.good() ) {
			
			std::getline( infile, str );
			std::cout << str << std::endl;
		}
		
	} else {

		std::cout << "Error opening file" << std::endl;
	}
	
	infile.close(); //good practice
	return;
}

int main() {

	std::cout << "Read infile" << std::endl << std::endl;
	readFile();
	std::cout << std::endl;
	
	std::cout << "Write to a new file" << std::endl << std::endl;
	writeToNewFile();
	std::cout << std::endl;
	
	std::cout << "Read again infile" << std::endl << std::endl;
	readFile();
	std::cout << std::endl;
	
	std::cout << "Replace & write to a new file" << std::endl << std::endl;
	replaceToNewFile();
	
	return 0;
}