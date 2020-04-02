#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H


// TASK:
/* 10.7 ( SavingsAccount Class) Create a SavingsAccount class. Use a static data member annual-
InterestRate to store the annual interest rate for each of the savers. Each member of the class con-
tains a private data member savingsBalance indicating the amount the saver currently has on
deposit. Provide member function calculateMonthlyInterest that calculates the monthly interest
by multiplying the balance by annualInterestRate divided by 12; this interest should be added to
savingsBalance . Provide a static member function modifyInterestRate that sets the static an-
nualInterestRate to a new value. Write a driver program to test class SavingsAccount . Instantiate
two different objects of class SavingsAccount , saver1 and saver2 , with balances of $2000.00 and
$3000.00, respectively. Set the annualInterestRate to 3 percent. Then calculate the monthly in-
terest and print the new balances for each of the savers. Then set the annualInterestRate to 4 per-
cent, calculate the next month’s interest and print the new balances for each of the savers.*/


class SavingsAccount {

	
	SavingsAccount(double annualInterest = 3.0f, double balance = 0f);

	static void modifyInterestRate(double newInterestRate);

	double calculateMonthlyInterest();

	double getBalance();
private:
	double savingsBalance;

	// interest rate is usually given in decimal format, thus double
	static double annualInterestRate;

};

#endif  SAVINGSACCOUNT_H