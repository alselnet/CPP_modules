/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:29:01 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/15 10:48:42 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	return ;
}

Serializer::Serializer(const Serializer &src)
{
	*(this) = src;
	return;
}

Serializer::~Serializer()
{
	return ;
}

Serializer &Serializer::operator=(const Serializer &src)
{
	(void) src;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast <uintptr_t> (ptr));
}

Data *	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data *> (raw));
}