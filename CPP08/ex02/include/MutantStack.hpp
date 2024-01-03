/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:36:16 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/02 14:35:53 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &ref);
		MutantStack<T>	&operator=(MutantStack<T> const &ref);
		~MutantStack(void);

		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		iterator	begin(void);
		iterator	end(void);
};

template<typename T>
MutantStack<T>::MutantStack(void) : MutantStack::stack() 
{
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &ref) : MutantStack<T>::stack(ref) 
{
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack(void) 
{
	return ;
}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> const &ref)
{
	if (this != &ref)
		MutantStack<T>::stack::operator=(ref);
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return this->c.end();
}

#endif