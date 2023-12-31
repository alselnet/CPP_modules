/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:09:52 by aselnet           #+#    #+#             */
/*   Updated: 2023/11/15 20:13:50 by aselnet          ###   ########.fr       */
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
	if (this->brain != 0)
		delete this->brain;
	this->brain = new Brain();
	*(this->brain) = *(src.brain);
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

void	Animal::makeSound(void) const
{
	std::cout << "random farm sound" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

Brain	*Animal::getBrain(void) const
{
	return (this->brain);
}
