/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:43:01 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 20:15:19 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->_name = "";
	this->_Hp = 100;
	this->_Energy = 50;
	this->_Ad = 20;
	return ;
}

ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ScavTrap str constructor called." << std::endl;
	this->_name = name;
	this->_Hp = 100;
	this->_Energy = 50;
	this->_Ad = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap assignment operator called." << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_Hp = src._Hp;
		this->_Energy = src._Energy;
		this->_Ad = src._Ad;
	}
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is now in Gate keeper mode." << std::endl;
	return ;
}
