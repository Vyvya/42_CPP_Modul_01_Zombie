/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:23:47 by vgejno            #+#    #+#             */
/*   Updated: 2023/06/27 21:26:16 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

	public:
		Harl();
		~Harl();
		
		void    complain( std::string level );

	private:
		void debug( void );
		void info( void );
		void warning( void );	
		void error( void );
};

#endif
