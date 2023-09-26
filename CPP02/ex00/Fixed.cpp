/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:18:02 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/25 18:23:23 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _NbValue(0)
{
	std::cout << "Default Constructor called." <<std::endl;
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called." <<std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." <<std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." <<std::endl;
	return(this->_NbValue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called." <<std::endl;
	this->_NbValue = raw;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called." <<std::endl;
	this->_NbValue = rhs.getRawBits();
	return (*this);
}