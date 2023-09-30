/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:58:42 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 19:53:59 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _Hp(10), _Energy(10), _Ad(0)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _Hp(10), _Energy(10), _Ad(0)
{
	std::cout << "ClapTrap str constructor called." << std::endl;
	return ;
}


ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap assignment operator called." << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_Hp = src._Hp;
		this->_Energy = src._Energy;
		this->_Ad = src._Ad;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_Hp < 1)
		std::cout << this->_name << " is dead and can't attack." << std::endl;
	else if (this->_Energy < 1)
		std::cout << this->_name << " has no energey left and can't attack." << std::endl;
	else
	{
		std::cout << this->_name << " attacks " << target << " causing " << this->_Ad << " point(s) of damage." << std::endl;
		this->_Energy --;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_Hp -= amount;
	if (this->_Hp < 1)
		this->_Hp = 0;
	std::cout << this->_name << " took " << amount << " point(s) of damage." << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Hp < 1)
	{
		std::cout << this->_name << " is dead and can't repair." << std::endl;
		return ;
	}
	else if (this->_Energy < 1)
	{
		std::cout << this->_name << " has no energy left and can't repair." << std::endl;
		return ;
	}
	this->_Hp += amount;
	this->_Energy--;
	std::cout << this->_name << " repaired and gained " << amount << " health point(s)." << std::endl;
	return ;
}
