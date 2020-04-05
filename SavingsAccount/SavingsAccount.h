#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Savings.h"

// Att implementera en proxy-klass är i detta fall inte nödvändigt, men jag gör det för att lära mig.

class Savings;

// Proxy-klass för Savings
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