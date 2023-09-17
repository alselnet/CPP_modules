/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:33:02 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 21:54:51 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() : _InstructionNb(4)
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	return ;
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void) const
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	std::string		HarlInstruction[4];
	Instruction_ptr Harl_ptr[4];
	
	HarlInstruction[0] = "DEBUG";
	HarlInstruction[1] = "INFO";
	HarlInstruction[2] = "WARNING";
	HarlInstruction[3] = "ERROR";

	Harl_ptr[0] = &Harl::debug;
	Harl_ptr[1] = &Harl::info;
	Harl_ptr[2] = &Harl::warning;
	Harl_ptr[3] = &Harl::error;

	int	i = 0;
	while (i < this->_InstructionNb && HarlInstruction[i].compare(level) != 0)
		i++;
	// if (i == this->_InstructionNb)
	// 	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	// while (i < this->_InstructionNb)
	// {
	// 	(this->*(Harl_ptr[i]))();
	// 	i++;
	// } //WHILE SOLUTION
	if (i < this->_InstructionNb)
		std::cout << "[ " << level << " ]" << std::endl; 
	switch (i)
	{
		case 0:
				(this->*(Harl_ptr[0]))();
				__attribute__ ((fallthrough));

		case 1:
				(this->*(Harl_ptr[1]))();
				__attribute__ ((fallthrough));
		case 2:
				(this->*(Harl_ptr[2]))();
				__attribute__ ((fallthrough));
		case 3:
				(this->*(Harl_ptr[3]))();
				break;
		default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
	}
	return ;
}
