/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:23:14 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/21 21:39:23 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> m_stack;

	m_stack.push(50);
	m_stack.push(2);
	m_stack.push(3);
	m_stack.push(117);
	m_stack.push(712);
	for (MutantStack<int>::iterator it = m_stack.begin(); it != m_stack.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	std::cout << std::endl << "TOP : " << m_stack.top() << " | SIZE : " << m_stack.size() << std::endl;
	m_stack.pop();
	std::cout << "TOP after POP : " << m_stack.top() << " | SIZE : " << m_stack.size() << std::endl << std::endl;

	// ITERATOR
	MutantStack<int>::iterator it = m_stack.begin();
	std::cout << "Begin iterator : " << *it << std::endl;
	++it;
	std::cout << "After ++it : " << *it << std::endl;
	--it;
	std::cout << "After --it : " << *it << std::endl;
	MutantStack<int>::iterator it_end = m_stack.end();
	std::cout << "Last iterator : " << *it_end << std::endl;
	return 0;
}