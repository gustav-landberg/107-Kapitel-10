#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double initialBalance){
	ptr = new Savings(initialBalance);
}

void SavingsAccount::modifyInterestRate(double newInterestRate)
{
	Savings temp;
	temp.modifyInterestRate(newInterestRate);
}

void SavingsAccount::calculateMonthlyInterest()
{
	ptr->calculateMonthlyInterest();
}

double SavingsAccount::getBalance() 
{
	double balance = ptr->getBalance();
	return balance;
}

void SavingsAccount::setBalance(double newBalance)
{
	ptr->setBalance(newBalance);
}
