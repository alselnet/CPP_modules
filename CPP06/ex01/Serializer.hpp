/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:28:59 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/15 10:41:42 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"

class Serializer
{
	private:
			Serializer();
	public:
			Serializer(Serializer const &src);
			~Serializer(void);

			Serializer	&operator = (Serializer const &tsrc);

			static uintptr_t	serialize(Data *ptr);
			static Data*		deserialize(uintptr_t raw);
};




#endif