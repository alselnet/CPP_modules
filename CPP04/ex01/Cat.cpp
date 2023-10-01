/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:20:47 by aselnet           #+#    #+#             */
/*   Updated: 2023/10/01 16:50:16 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called." << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*(this->brain) = *(src.brain);
	*this = src;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		*(this->brain) = *(src.brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOW" << std::endl;
	return ;
}
