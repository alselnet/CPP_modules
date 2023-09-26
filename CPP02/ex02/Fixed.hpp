/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:18:07 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/26 22:10:32 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	public:
			//Constructors
			Fixed();
			Fixed(const Fixed &src);
			Fixed(const int Nb);
			Fixed(const float Nb);

			//Destructor
			~Fixed();

			//Getters, Setters
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			int		getFracBits(void) const;

			//Converters
			float	toFloat(void) const;
			int		toInt(void) const;

			//Assignment operator
			Fixed	&operator=(Fixed const &rhs);

			//Comparative operators
			bool	operator>(Fixed const &rhs) const;
			bool	operator<(Fixed const &rhs) const;
			bool	operator>=(Fixed const &rhs) const;
			bool	operator<=(Fixed const &rhs) const;
			bool	operator==(Fixed const &rhs) const;
			bool	operator!=(Fixed const &rhs) const;

			//Arithmetic operators
			Fixed	operator+(Fixed const &rhs);
			Fixed	operator-(Fixed const &rhs);
			Fixed	operator*(Fixed const &rhs);
			Fixed	operator/(Fixed const &rhs);

			//Increment & decrement operators
			Fixed	&operator++(void);
			Fixed	operator++(int);
			Fixed	&operator--(void);
			Fixed	operator--(int);
			
			//Min & max operators
			static Fixed		&min(Fixed &lfs, Fixed &rhs);
			static Fixed		&max(Fixed &lfs, Fixed &rhs);
			static Fixed const	&min(Fixed const &lfs, Fixed const &rhs);
			static Fixed const	&max(Fixed const &lfs, Fixed const &rhs);

	private:
			int					_RawBits;
			static const int	_Bits = 8;
};

//Filestream operator
std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif