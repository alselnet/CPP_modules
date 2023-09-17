/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:48:16 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 19:11:11 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

sed::sed(std::string argv1, std::string argv2, std::string argv3)
{
	SetFstreams(argv1);
	InitStrings(argv2, argv3);
	return ;
}

sed::~sed()
{
	this->_ifs.close();
	this->_ofs.close();
	return ;
}

void	sed::SetFstreams(std::string infile)
{
	std::string	replace;
	this->_ifs.open(infile);
	if(!this->_ifs)
		return ;
	replace = infile;
	replace.append(".replace");
	this->_ofs.open(replace);
	return ;
}

void	sed::InitStrings(std::string s1, std::string s2)
{
	this->_s1 = s1;
	this->_s2 = s2;
	return ;
}

void	sed::OfsWrite(void)
{
	std::string	Buffer;
	size_t		pos;

	while(std::getline(this->_ifs, Buffer))
	{
		pos = Buffer.find(this->_s1, 0);
		while (pos != Buffer.npos)
		{	
			Buffer.erase(pos, this->_s1.length());
			Buffer.insert(pos, this->_s2);
			pos = Buffer.find(this->_s1, 0);
		}
		this->_ofs << Buffer << std::endl;
	}
	return ;
}

std::ifstream	&sed::GetIfs()
{
	return (this->_ifs);
}

std::ofstream	&sed::GetOfs()
{
	return (this->_ofs);
}
