/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:07:13 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 20:18:28 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called." << std::endl;
	this->_name = "";
	this->_Hp = 100;
	this->_Energy = 100;
	this->_Ad = 30;
	return ;
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap str constructor called." << std::endl;
	this->_name = name;
	this->_Hp = 100;
	this->_Energy = 100;
	this->_Ad = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap assignment operator called." << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_Hp = src._Hp;
		this->_Energy = src._Energy;
		this->_Ad = src._Ad;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " requests a high fives." << std::endl;
	return ;
}
