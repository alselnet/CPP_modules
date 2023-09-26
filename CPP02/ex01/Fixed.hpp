/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:18:07 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/26 21:22:28 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	public:
			Fixed();
			Fixed(const Fixed &src);
			Fixed(const int Nb);
			Fixed(const float Nb);
			~Fixed();

			Fixed	&operator=(Fixed const &rhs);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			int		getFracBits(void) const;
			float	toFloat(void) const;
			int		toInt(void) const;
	private:
			int					_RawBits;
			static const int	_Bits = 8;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif