/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:26:07 by aselnet           #+#    #+#             */
/*   Updated: 2023/10/01 16:49:56 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called." << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*(this->brain) = *(src.brain);
	*this = src;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		*(this->brain) = *(src.brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "BARK" << std::endl;
	return ;
}
