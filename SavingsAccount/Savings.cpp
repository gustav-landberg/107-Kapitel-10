#include "Savings.h"

#include <stdexcept>

double Savings::annualInterestRate;

Savings::Savings(double balance) {

	if (!annualInterestRate) annualInterestRate = 0;
	this->savingsBalance = balance;
}

void Savings::modifyInterestRate(double interestRate)
{
	if (interestRate >= 0.0)
		annualInterestRate = interestRate;
	else
		throw std::invalid_argument(" Cannot set negative annual rate.");
}



 void Savings::calculateMonthlyInterest() {
	if (savingsBalance >= 0.0) {
		double interest = (savingsBalance * annualInterestRate) / 12;
		savingsBalance += interest;
	}
	else
		throw std::invalid_argument("Savings is negative; cannot calculate interest.");
}

double Savings::getBalance()
{
	return savingsBalance;
}

void Savings::setBalance(double newBalance)
{
	this->savingsBalance = newBalance;
}
