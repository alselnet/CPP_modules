/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:20:47 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 22:35:57 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called." << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat assignment operator called." << std::endl;
	if (this != &src)
		this->type = src.type;

	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "MEOW" << std::endl;
	return ;
}
