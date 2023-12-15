/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:11:40 by aselnet           #+#    #+#             */
/*   Updated: 2023/11/13 13:57:02 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	PhoneBook::ContactNb = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add(void)
{
	std::string	Input;

	std::cout << "Please enter your contact's first name : ";
	std::cin >> Input;
	this->List[this->ContactNb].FirstName = Input;

	std::cout << "Please enter your contact's last name : ";
	std::cin >> Input;
	this->List[this->ContactNb].LastName = Input;

	std::cout << "Please enter your contact's nickname : ";
	std::cin >> Input;
	this->List[this->ContactNb].Nickname = Input;

	std::cout << "Please enter your contact's phone number : ";
	std::cin >> Input;
	this->List[this->ContactNb].PhoneNumber = Input;

	std::cout << "Please enter your contact's darkest secret : ";
	std::getline(std::cin >> std::ws, Input);
	this->List[this->ContactNb].DarkestSecret = Input;

	this->ContactNb += 1;
	if (this->ContactNb > 7)
		this->ContactNb = 0;
}

void	PrintLine(int	LineNb, Contact Contact)
{
	std::string Buffer;

	std::cout << "|" << LineNb << "         |";
	if (Contact.FirstName.length() <= 10)
	{
		std::cout << std::setfill(' ') << std::setw (10);
		std::cout << Contact.FirstName;
	}
	else
	{
		Buffer = Contact.FirstName.substr(0, 9);
		std::cout << Buffer << ".";
	}
	std::cout << "|";
	if (Contact.LastName.length() <= 10)
	{
		std::cout << std::setfill(' ') << std::setw (10);
		std::cout << Contact.LastName;
	}
	else
	{
		Buffer = Contact.LastName.substr(0, 9);
		std::cout << Buffer << ".";
	}
	std::cout << "|";
	if (Contact.Nickname.length() <= 10)
	{
		std::cout << std::setfill(' ') << std::setw (10);
		std::cout << Contact.Nickname;
	}
	else
	{
		Buffer = Contact.Nickname.substr(0, 9);
		std::cout << Buffer << ".";
	}
	std::cout << "|" << std::endl;
	return ;
}

void	PrintDirectory(const Contact *List)
{
	int	LineNb = -1;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (++LineNb < 8)
		PrintLine(LineNb, List[LineNb]);
	std::cout << "---------------------------------------------" << std::endl;
	return ;
}

void	PrintContact(const Contact Contact)
{
	std::cout << "First Name : " << Contact.FirstName << std::endl;
	std::cout << "Last Name : " << Contact.LastName << std::endl;
	std::cout << "Nickname : " << Contact.Nickname << std::endl;
	std::cout << "Phone Number : " << Contact.PhoneNumber << std::endl;
	std::cout << "Darkest Secret : " << Contact.DarkestSecret << std::endl;
}

void	PhoneBook::search(void) const
{
	std::string Input;

	PrintDirectory(this->List);
	std::cout << "Please enter the index of the contact you wish to fetch : ";
	std::cin >> Input;

	if (Input.compare("0") != 0 && Input.compare("1") != 0 && Input.compare("2") != 0 && Input.compare("3") != 0
	&& Input.compare("4") != 0 && Input.compare("5") != 0 && Input.compare("6") != 0 && Input.compare("7") != 0)
		std::cout << "Invalid index" << std::endl;
	else if (atoi(Input.data()) < 0 || atoi(Input.data()) > 7)
		std::cout << "Invalid index" << std::endl;
	else
		PrintContact(this->List[atoi(Input.data())]);
	return ;
}