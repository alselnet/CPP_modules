/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:23:14 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/04 17:14:48 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

int main()
{
	std::cout << std::endl << "-----Test 0 (subject) -----" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl << "-----Test 1-----" << std::endl;
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
	}
	return (0);
}
