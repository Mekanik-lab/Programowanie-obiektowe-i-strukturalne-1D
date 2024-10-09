#pragma once
#include <iostream>

class BankAccount
{
public:
	double balance; // stan konta
	std::string owner; //właściciel
	std::string currency; // waluta

	void AccountInformation()
	{
		std::cout << "Informacje o koncie bankowym.\n";
		std::cout << "Właściciel: " << owner << "\n";
		std::cout << "Saldo: " << balance << " " << currency << "\n\n";
	}

	void DepositToAccount(double amount)
	{
		amount = abs(amount);
		balance = balance + amount;
	}

	bool WidthDrawFromAccount(double amount)
	{
		amount = abs(amount);
		if (balance - amount >= 0)
		{

			balance = balance - amount;
			return true;
		}
		return false;
	}

	void TransferBetweenAccounts(BankAccount& targetAccount, double amount)
	{
		if (WidthDrawFromAccount(amount) == true)
			targetAccount.DepositToAccount(amount);
	}
};
