/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:52:12 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 04:57:55 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie constructed" << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
	announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " crumbled away" << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	announce();
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
