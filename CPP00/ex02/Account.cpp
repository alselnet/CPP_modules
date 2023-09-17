/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:26:49 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 02:29:55 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.hpp"

static void	_displayTimestamp(void)
{
	time_t	now;
	tm		*local_time;

	now = time(0);
	local_time = localtime(&now);
	std::cout << "[" << 1900 + local_time->tm_year;
	if (local_time->tm_mon < 9)
		std::cout << '0' << local_time->tm_mon + 1;
	else
		std::cout << local_time->tm_mon + 1;
	if (local_time->tm_mday < 10)
		std::cout << '0' << local_time->tm_mday;
	else
		std::cout << local_time->tm_mday;
	std::cout << "_";
	if (local_time->tm_hour < 10)
		std::cout << '0' << local_time->tm_hour;
	else
		std::cout << local_time->tm_hour;
	if (local_time->tm_min < 10)
		std::cout << '0' << local_time->tm_min;
	else
		std::cout << local_time->tm_min;
	if (local_time->tm_sec < 10)
		std::cout << '0' << local_time->tm_sec;
	else
		std::cout << local_time->tm_sec;
	std::cout << "] ";
}

Account:: Account(int initial_deposit) : _amount(initial_deposit)
{
	_nbAccounts++;
	this->_accountIndex =_nbAccounts;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	return ;
}

Account:: ~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	return ;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	return (0);
}
int		Account::checkAmount(void) const
{
	return (0);
}
void	Account::displayStatus(void) const
{
	return ;
}
void	Account::displayAccountsInfos(void)
{
	return ;
}