/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 09:54:33 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/17 10:53:30 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	this->_size = 0;
	this->_tab = new T[this->_size];

	return ;
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
	this->_tab = new T[this->_size];

	return ;
}

template <typename T>
Array<T>::Array(const Array<T> &src)
{
	this->_tab = 0;
	(*this) = src;
	
	return ;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &src)
{
	if (this != &src)
	{
		this->_size = src._size;
		if (this->_tab)
			delete[] this->_tab;
		this->_tab = new T [this->_size];
		unsigned int	i = 0;
		while (i < this->_size)
		{
			this->_tab[i] = src._tab[i];
			i++;
		}
	}

	return (*this);
}

template <typename T>
T	&Array<T>::operator[](size_t index) const
{
	if (index < 0 || index >= this->_size)
	{
		throw (std::out_of_range("wrong index"));
	}
	return(this->_tab[index]);
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_tab;

	return ;
}