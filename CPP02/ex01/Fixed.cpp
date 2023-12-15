/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:18:02 by aselnet           #+#    #+#             */
/*   Updated: 2023/11/15 15:43:38 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _RawBits(0)
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

Fixed::Fixed(const int Nb) : _RawBits(Nb << this->getFracBits())
{
	std::cout << "Int constructor called." <<std::endl;
	return ;
}

Fixed::Fixed(const float Nb) : _RawBits(roundf(Nb * (1 << this->getFracBits())))
{
	std::cout << "Float constructor called." <<std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." <<std::endl;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (float)(1 << this->getFracBits()));
}

int		Fixed::toInt(void) const
{
	return ((this->getRawBits() >> this->getFracBits()));
}

int	Fixed::getRawBits(void) const
{
	return(this->_RawBits);
}

void Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
	return ;
}

int	Fixed::getFracBits(void) const
{
	return(this->_Bits);
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->_RawBits = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
