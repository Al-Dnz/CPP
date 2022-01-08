#include <string>
#include <iostream>
#include <ctime>
#include "Account.hpp"

// PUBLIC

int		Account::getNbAccounts(void){return _nbAccounts;}
int		Account::getTotalAmount(void){return _totalAmount;}
int		Account::getNbDeposits(void){return _totalNbDeposits;}
int		Account::getNbWithdrawals(void){return _totalNbWithdrawals;}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount 
		<< ";deposits:" <<  _totalNbDeposits << ";withdrawals:" 
		<< _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) 
{
	int previous_amount = _amount;
	_amount = _amount + deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << previous_amount 
		<< ";deposit:" <<  deposit << ";amount:" << _amount 
		<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int previous_amount;

	_displayTimestamp();
	if (checkAmount() && withdrawal > _amount)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused"  << std::endl;
		return false;
	}
	else
	{
		previous_amount = _amount;
		_amount = _amount - withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << previous_amount
			<< ";withdrawal:" << withdrawal << ";amount:" << _amount 
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

int		Account::checkAmount(void) const 
{
	if (_amount > 0)
		return (1);
	else
		return (0);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount 
		<< ";deposits:" << _nbDeposits << ";withdrawals:" 
		<< _nbWithdrawals << std::endl;
}

// PRIVATE

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;

void	Account::_displayTimestamp(void)
{

	char time_data[16];
	const std::time_t ts = std::time(NULL);

	std::strftime(time_data, 16, "%G%m%d_%H%M%S", std::localtime(&ts));
	std::cout << "[" << time_data << "] ";
}

// CONSTRUCTORS

Account::Account(int initial_deposit): _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl; 
	_totalAmount += _amount;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount 
		<< ";closed" << std::endl;
}
