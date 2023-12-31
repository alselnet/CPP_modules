/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:09:52 by aselnet           #+#    #+#             */
/*   Updated: 2023/11/15 20:18:00 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
	this->brain = new Brain();
	return ;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*(this->brain) = *(src.brain);
	if (this->brain != 0)
		delete this->brain;
	this->brain = new Brain();
	*this = src;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
	delete this->brain;
	return ;
}

Animal	&Animal::operator=(const Animal &src)
{
	std::cout << "Animal assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		if (this->brain != 0)
			delete this->brain;
		this->brain = new Brain();
		*(this->brain) = *(src.brain);
	}
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

Brain	*Animal::getBrain(void) const
{
	return (this->brain);
}
