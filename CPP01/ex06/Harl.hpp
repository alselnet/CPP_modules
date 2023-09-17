/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:20:02 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 21:31:33 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>


class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
	private:
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;

		int				_InstructionNb;	
};

typedef void (Harl::*Instruction_ptr)(void) const;

#endif