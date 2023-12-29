/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 05:18:06 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/29 15:54:46 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*(this) = src;
	return;
}

ScalarConverter::~ScalarConverter()
{
	return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
	(void) src;
	return (*this);
}

bool hasNoFractionF(float value) 
{
    return value == static_cast<float>(static_cast<int>(value));
}

bool hasNoFractionD(double value) 
{
    return value == static_cast<double>(static_cast<int>(value));
}

bool	inputValidityCheck(std::string literal)
{
	int		i = 0;
	bool	multipleDots = false;

	if (literal.compare("+inf") == 0 || literal.compare("-inf") == 0 || literal.compare("nan") == 0 
		|| literal.compare("+inff") == 0 || literal.compare("-inff") == 0 || literal.compare("nanf") == 0)
			return (true);
	if (!literal[i + 1])
		return (true);
	if (literal[i] == '+' || literal[i] == '-')
		i++;
	while (literal[i] && ((literal[i] >= '0' && literal[i] <= '9') || literal[i] == '.'))
	{
		if (literal[i] == '.' && multipleDots == false && literal[i + 1])
			multipleDots = true;
		else if (literal[i] == '.' && (multipleDots == true || !literal[i + 1]))
			return (false);
		i++;
	}
	if (!literal[i] || (literal[i] == 'f' && !literal[i + 1]))
		return (true);
	else
		return (false);
}

int		parseInput(std::string literal)
{
	int	i = 0;

	if (literal.compare("+inff") == 0 || literal.compare("-inff") == 0 || literal.compare("nanf") == 0)
		return (2);
	if (literal.compare("+inf") == 0 || literal.compare("-inf") == 0 || literal.compare("nan") == 0)
		return (3);
	if (!literal[i + 1] && (literal[i] < 48 || literal[i] > 58))
		return (0);
	if (literal[i] == '-' || literal[i] == '+')
		i++;
	while (literal[i] && (literal[i] >= '0' && literal[i] <= '9'))
		i++;
	if (!literal[i])
		return (1);
	i = 0;
	while (literal[i + 1])
		i++;
	if (literal[i] == 'f')
		return (2);
	return (3);
}

void	printChar(std::string literal)
{
	int		i = static_cast <int> (literal[0]);
	float	f;
	double	d;

	if (literal[0] < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << literal[0] << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	f = static_cast <float> (i);
	std::cout << "float: " << f << ".0f" << std::endl;
	d = static_cast <double> (i);
	std::cout << "double: " << d << ".0" << std::endl;
	
	return ;
}

void	printInt(std::string literal)
{
	int		i;
	float	f;
	double	d;

	try
	{
		std::istringstream	ss (literal);
		ss >> i;
		if ((i == std::numeric_limits<int>::max() || i == std::numeric_limits<int>::min()) && ss.fail())
			throw std::out_of_range("no possible conversion");
		else if (i < 128)
		{
			if (i < 32 && i > -1)
				std::cout << "char: Not displayable" << std::endl;
			else if (i < 0)
				std::cout << "char: impossible" << std::endl;
			else
			{
				char c = static_cast <char>(i);
				std::cout << "char: '" << c << "'" << std::endl;
			}
		}
		else
			std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << i << std::endl;
	}
	catch(const std::out_of_range &oor)
	{  
		std::cout << "char: impossible" << std::endl;
		std::cerr << "int: overflow (" << oor.what() << ")" << std::endl;
		std::cerr << "float: overflow (" << oor.what() << ")" << std::endl;
		std::cerr << "double: overflow (" << oor.what() << ")" << std::endl;
		return ;
	}
	f = static_cast <float> (i);
	std::cout << "float: " << f;
	if (i < 1000000 && i > -1000000)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;

	d = static_cast <double> (i);
	std::cout << "double: " << d;
	if (i < 1000000 && i > -1000000)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;

     return;
}

void	printFloat(std::string literal)
{
	int		i;
	float	f;
	double	d;

	if (literal.compare("nanf") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	if (literal.compare("+inff") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	if (literal.compare("-inff") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	try
	{
		std::istringstream ss(literal);
		ss >> f;
		if ((f == std::numeric_limits<float>::max() || f == std::numeric_limits<float>::min()) && ss.fail())
			throw std::out_of_range("no possible conversion");
	}
	catch(const std::out_of_range &oor)
	{  
		std::cout << "char: impossible" << std::endl;
		std::cerr << "int: overflow (" << oor.what() << ")" << std::endl;
		std::cerr << "float: overflow (" << oor.what() << ")" << std::endl;
		std::cerr << "double: overflow (" << oor.what() << ")" << std::endl;
		return ;
	}
	if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		i = static_cast <int> (f);
		if (i < 128)
		{
			if (i < 32 && i > -1)
				std::cout << "char: Not displayable" << std::endl;
			else if (i < 0)
				std::cout << "char: impossible" << std::endl;
			else
			{
				char c = static_cast <char>(i);
				std::cout << "char: '" << c << "'" << std::endl;
			}
		}
		else
			std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << i << std::endl;
	}

	if (f < 1000000.0 && f > -1000000.0 && hasNoFractionF(f))
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;

	d = static_cast <double> (f);
	if (d < 1000000.0 && d > -1000000.0 && hasNoFractionD(d))
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;

     return;
}

void	printDouble(std::string literal)
{
	int		i;
	float	f;
	double	d;

	if (literal.compare("nan") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	if (literal.compare("+inf") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	if (literal.compare("-inf") == 0)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	try
	{
		std::istringstream	ss (literal);
		ss >> d;
		if ((d == std::numeric_limits<double>::max() || d == std::numeric_limits<double>::min()) && ss.fail())
			throw std::out_of_range("no possible conversion");
	}
	catch(const std::out_of_range &oor)
	{  
		std::cout << "char: impossible" << std::endl;
		std::cerr << "int: overflow (" << oor.what() << ")" << std::endl;
		std::cerr << "float: overflow (" << oor.what() << ")" << std::endl;
		std::cerr << "double: overflow (" << oor.what() << ")" << std::endl;
		return ;
	}
	if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		i = static_cast <int> (d);
		if (i < 128)
		{
			if (i < 32 && i > -1)
				std::cout << "char: Not displayable" << std::endl;
			else if (i < 0)
				std::cout << "char: impossible" << std::endl;
			else
			{
				char c = static_cast <char>(i);
				std::cout << "char: '" << c << "'" << std::endl;
			}
		}
		else
			std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << i << std::endl;
	}
	if (d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
	{
		f = static_cast <float> (d);
		if (f < 1000000.0 && f > -1000000.0 && hasNoFractionF(f))
			std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
	}

	if (d < 1000000.0 && d > -1000000.0 && hasNoFractionD(d))
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;

     return;
}

void	ScalarConverter::convert(std::string literal)
{
	char	branch;

	if (inputValidityCheck(literal) == false)
	{
		std::cerr << "Invalid Input" << std::endl;
		return ;
	}
	branch = parseInput(literal);
	switch (branch)
	{
		case(0):
			printChar(literal);
			break;
		case(1):
			printInt(literal);
			break;
		case(2):
			printFloat(literal);
			break;
		case(3):
			printDouble(literal);
			break;
	}
	return ;
}