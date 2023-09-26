/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:18:07 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/25 18:16:56 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
			Fixed();
			Fixed(const Fixed &src);
			~Fixed();

			Fixed	&operator=(Fixed const &rhs);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);

	private:
			int					_NbValue;
			static const int	_Bits = 8;
};




#endif