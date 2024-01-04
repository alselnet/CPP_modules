/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:56:54 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/04 18:03:25 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int	process_rpn(std::string argv)
{
	std::stack <int>	stack;
	std::istringstream	expression(argv);
	std::string			c;

	while (expression >> c)
	{
		if (c.size() != 1)
		{
			std::cerr << "error: unrecognized parameter" << std::endl;
			return (-1);		
		}
		if (c[0] >= '0' && c[0] <= '9')
		{
			stack.push(c[0] - 48);
		}
		else if (c[0] == '+' || c[0] == '-' || c[0] == '/' || c[0] == '*')
		{
			int	a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();

			if (c[0] == '+')
				stack.push(a + b);
			else if (c[0] == '-')
				stack.push(b - a);
			else if (c[0] == '/')
			{
				if (!a)
				{
					std::cerr << "error: division by 0" << std::endl;
					return (-1);
				}
				stack.push(b / a);
			}
			else
				stack.push(a * b);
		}
		else
		{
			std::cerr << "error: unrecognized parameter" << std::endl;
			return (-1);
		}
	}
	if (stack.size() != 1)
	{
			std::cerr << "error: invalid rpn expression" << std::endl;
			return (-1);
	}
	std::cout << stack.top() << std::endl;
	return (0);
}
