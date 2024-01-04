/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 13:46:44 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/28 16:51:37 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange
{
	public:
			BitcoinExchange(const std::string csv);
			BitcoinExchange(BitcoinExchange const &src);
			virtual ~BitcoinExchange();

			BitcoinExchange &operator=(BitcoinExchange const &src);

	//getter for _data
			const std::map<std::string, float>& getData() const;

	//prices calculation and output
			float	getVal(std::string key) const;
			float	getPrice(std::string date, float btcCount) const;
			void	processPrices(std::string input) const;

	private:
			BitcoinExchange(void);
			std::map<std::string, float> _data;
};

std::ostream	&operator<<(std::ostream &o, const BitcoinExchange& rhs);

#endif