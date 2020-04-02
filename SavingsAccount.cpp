#include "SavingsAccount.h"

#include <stdexcept>

void SavingsAccount::modifyInterestRate(double interestRate)
{
	if (interestRate < 0)
		annualInterestRate = interestRate;
	else
		throw std::invalid_argument("Cannot set negative annual rate.");
}



inline void SavingsAccount::calculateMonthlyInterest() {
	double interest = (savingsBalance * annualInterestRate) / 12;
	savingsBalance += interest;
}
