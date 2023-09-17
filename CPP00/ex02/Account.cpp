/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 01:26:49 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 03:01:03 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account:: Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex =_nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	return ;
}

Account:: ~Account(void)
{
	_nbAccounts--;
	_totalAmount -= this->_amount;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
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

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	if (deposit > 0)
	{
		this->_nbDeposits ++;
		_totalNbDeposits ++;
	}
	_totalAmount += deposit; 
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals ++;
	_totalNbWithdrawals ++;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbDeposits << std::endl;
	return (0);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}
