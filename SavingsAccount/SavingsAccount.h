#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Savings.h"

// Att implementera en proxy-klass �r i detta fall inte n�dv�ndigt, men jag g�r det f�r att l�ra mig.

class Savings;

// Proxy-klass f�r Savings
class SavingsAccount {
public:
	SavingsAccount(double balance = 0.0);

	static void modifyInterestRate(double newInterestRate);

	void calculateMonthlyInterest();

	double getBalance();

	void   setBalance(double);

	~ SavingsAccount() { delete ptr;  }
private:
	Savings* ptr;
};









#endif