#ifndef SAVINGS_H
#define SAVINGS_H





class Savings {

public:
	Savings(double balance = 0.0);

	static void modifyInterestRate(double newInterestRate);

	void calculateMonthlyInterest();

	double getBalance();

	void   setBalance(double);


private:
	double savingsBalance;

	// interest rate is usually given in decimal format, thus double
	static double annualInterestRate;


};


#endif