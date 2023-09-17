/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 05:12:24 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 05:53:10 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string	type)
{
	this->_type = type;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string	const &Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string name)
{
	this->_type = name;
	return ;
}
