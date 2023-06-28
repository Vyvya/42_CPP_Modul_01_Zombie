/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:59:05 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/27 21:33:10 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	
	std::cout << "Constructor called" << std::endl;
}

Harl::~Harl() {
	
	std::cout << "Destructor called" << std::endl;
}

void Harl::debug() {
	
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon ";
	std::cout << "for my 7XL-double-cheese-triple-pickle-special- ";
	std::cout << "ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
	return;
}

void Harl::info() {
	
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
	return;
}

void Harl::warning() {
	
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you ";
	std::cout << "started working here since last month." << std::endl;
	std::cout << std::endl;
	return;
}

void Harl::error() {
	
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
	return;
}

void Harl::complain( std::string level ) {

	void( Harl::*f[4])(void) = { &Harl::debug,
								&Harl::info,
								&Harl::warning,
								&Harl::error };
	std::string message[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for ( int i = 0; i < 4; ++i ) {
		if ( level == message[i] ) {
			(this->*(f[i]))();
		}
	}
}