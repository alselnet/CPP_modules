/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:47:36 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 18:49:33 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP
#include <iostream>
#include <string>
#include <fstream>

class sed
{
	public:
		sed(std::string argv1, std::string argv2, std::string argv3);
		~sed();
		void			SetFstreams(std::string infile);
		void			InitStrings(std::string s1, std::string s2);
		void			OfsWrite(void);
		std::ifstream	&GetIfs();
		std::ofstream	&GetOfs();

	private:
		std::ifstream	_ifs;
		std::ofstream	_ofs;
		std::string		_s1;
		std::string		_s2;
};

#endif