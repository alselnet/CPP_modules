/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:18:02 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/26 22:33:24 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*--------------*/
/* Constructors */
/*--------------*/

Fixed::Fixed() : _RawBits(0)
{
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
	return ;
}

Fixed::Fixed(const int Nb) : _RawBits(Nb << this->getFracBits())
{
	return ;
}

Fixed::Fixed(const float Nb) : _RawBits(roundf(Nb * (1 << this->getFracBits())))
{
	return ;
}

/*------------*/
/* Destructor */
/*------------*/

Fixed::~Fixed()
{
	return ;
}

/*------------------*/
/* Getters, Setters */
/*------------------*/

int	Fixed::getRawBits(void) const
{
	return(this->_RawBits);
}

int	Fixed::getFracBits(void) const
{
	return(this->_Bits);
}

void Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
	return ;
}

/*------------*/
/* Converters */
/*------------*/

float	Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (float)(1 << this->getFracBits()));
}

int		Fixed::toInt(void) const
{
	return ((this->getRawBits() >> this->getFracBits()));
}

/*----------------------*/
/* Assignment operator */
/*----------------------*/

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_RawBits = rhs.getRawBits();
	return (*this);
}

/*-----------------------*/
/* Comparative operators */
/*-----------------------*/

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

/*----------------------*/
/* Arithmetic operators */
/*----------------------*/

Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed A((this->getRawBits() + rhs.getRawBits()));
	return (A);
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed A((this->getRawBits() - rhs.getRawBits()));
	return (A);
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed A((this->toFloat() * rhs.toFloat()));
	return (A);
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed A((this->toFloat() / rhs.toFloat()));
	return (A);
}

/*---------------------------------*/
/* Increment & decrement operators */
/*---------------------------------*/

Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	A(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (A);
}

Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	A(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (A);
}

/*---------------------*/
/* Min & max operators */
/*---------------------*/

Fixed	&Fixed::min(Fixed &lfs, Fixed &rhs)
{
	if (lfs.getRawBits() < rhs.getRawBits())
		return (lfs);
	else
		return (rhs);
}

Fixed const	&Fixed::min(Fixed const &lfs, Fixed const &rhs)
{
	if (lfs.getRawBits() < rhs.getRawBits())
		return (lfs);
	else
		return (rhs);
}

Fixed	&Fixed::max(Fixed &lfs, Fixed &rhs)
{
	if (lfs.getRawBits() > rhs.getRawBits())
		return (lfs);
	else
		return (rhs);
}

Fixed const	&Fixed::max(Fixed const &lfs, Fixed const &rhs)
{
	if (lfs.getRawBits() > rhs.getRawBits())
		return (lfs);
	else
		return (rhs);
}

/*---------------------*/
/* Filestream operator */
/*---------------------*/

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
