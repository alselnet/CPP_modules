/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:56:54 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/04 18:34:02 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	return ;
}

BitcoinExchange::BitcoinExchange(const std::string csv)
{
	std::ifstream	inputFile(csv.c_str());

    std::string line;

    if (!inputFile.is_open())
	{
        std::cerr << "Error opening CSV file." << std::endl;
        return ;
    }

	float			value;
	std::getline(inputFile, line);
    while (std::getline(inputFile, line))
	{
		std::string			key;
		std::istringstream	iss(line);

		std::getline(iss, key, ',');
		if (iss.fail()) 
		{
            std::cerr << "Error reading CSV line key." << std::endl;
            return ; 
        }
		iss >> value;
		if (iss.fail()) 
		{
            std::cerr << "Error  reading CSV line value." << std::endl;
            return ; 
        }
		this->_data.insert(std::pair <std::string, double> (key, value));
	}
	inputFile.close();

	return ;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	if (this != &src)
		*(this) = src;

	return ;
}

BitcoinExchange::~BitcoinExchange()
{
	return ;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
	this->_data = src._data;	

	return (*this);
}


const std::map<std::string, float>& BitcoinExchange::getData() const
{
	return (this->_data);
}

float	BitcoinExchange::getVal(std::string key) const
{
	std::map<std::string, float>::const_iterator it;

	it = this->_data.lower_bound(key);
	if (it == this->_data.begin())
		return (-1.f);
	if ((key != it->first || it == this->_data.end()))
		it--;
	return (it->second);
}

float	BitcoinExchange::getPrice(std::string date, float btcCount) const
{
	float	value;

	value = this->getVal(date);
	if (value < 0.f)
		return (-1.f);
	else
		return (value * btcCount);
}

bool	isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return (true);
			else
				return (false);
		}
		else
			return (true);
	}
	else
		return (false);
}

bool	checkKey(std::string key)
{
	std::istringstream	ss(key);
	int	day, month, year;
	
	if (ss >> year && ss.get() == '-' && ss >> month && ss.get() == '-' && ss >> day && ss.eof())
	{
		if (year < 2009 || (year == 2009 && month == 01 && day < 02))
			return (false);
		if (month >= 1 && month <= 12)
		{
			if (month == 2)
			{
				if (!(day >= 1 && day <= (isLeapYear(year) ? 29 : 28)))
					return (false);
				return (true);
			}
			else if ((month <= 7 && month % 2 != 0) || (month >= 8 && month % 2 == 0))
			{
				if (!(day >= 1 && day <= 31))
					return (false);
				return (true);
			}
			else
			{
				if (!(day >= 1 && day <= 30))
					return (false);
				return (true);
			}
		}
		else
			return (false);
	}
	return (false);
}

bool	checkVal(double value)
{
	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}

void	BitcoinExchange::processPrices(std::string input) const
{
	std::ifstream	inputFile(input.c_str());

    std::string line;

    if (!inputFile.is_open()) 
	{
        std::cerr << "Error opening input file." << std::endl;
        return ;
    }

	float			value;
	std::getline(inputFile, line);
    while (std::getline(inputFile, line))
	{
		std::string			key;
		std::istringstream	iss(line);
	
		std::getline(iss, key, '|');
		if (iss.fail()) 
		{
        	std::cerr << "Error: incorrect key." << std::endl;
			return;
		}
		std::string	errorKey = key;
		if (key.size() > 10)
			key.erase(10, 1);
		iss >> value;
		if (checkKey(key) == false)
            std::cerr << "Error: bad input => " << errorKey << std::endl;
		else if (iss.fail() || !iss.eof()) 
            std::cerr << "Error: bad value." << std::endl;
		else if (checkVal(value) == true)
		{
			float price;
			price = BitcoinExchange::getPrice(key, value);
			std::cout << key << " => " << value << " = " << price << std::endl;
		}
	}
	inputFile.close();
}

std::ostream	&operator<<(std::ostream &o, const BitcoinExchange&rhs)
{
	const std::map<std::string, float> &temp = rhs.getData();
	std::map<std::string, float>::const_iterator it;

	for (it = temp.begin(); it != temp.end(); it++)
	{
		o << "key : " << it->first << std::endl << "value : " << it->second << std::endl << std::endl;
	}

	return (o);
}
