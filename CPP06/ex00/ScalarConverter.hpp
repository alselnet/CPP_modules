/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 05:17:26 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/29 15:25:25 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <limits>
#include <stdexcept>
#include <sstream>

class ScalarConverter
{
	private:
			ScalarConverter();

	public:
			ScalarConverter(const ScalarConverter &src);
			virtual ~ScalarConverter();

			ScalarConverter &operator=(const ScalarConverter &src);

			static void	 convert(std::string literal);

			class ImpossibleException : public std::exception
			{
				public :
						virtual const char* what() const throw()
						{
							return ("impossible\n");
						}
			};
};



#endif