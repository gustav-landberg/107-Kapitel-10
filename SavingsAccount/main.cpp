#include "SavingsAccount.h"
#include <iostream>



// TASK:
/*  Write a driver program to test class SavingsAccount . Instantiate
two different objects of class SavingsAccount , saver1 and saver2 , with balances of $2000.00 and
$3000.00, respectively. Set the annualInterestRate to 3 percent. Then calculate the monthly in-
terest and print the new balances for each of the savers. Then set the annualInterestRate to 4 per-
cent, calculate the next month�s interest and print the new balances for each of the savers.*/

int main() {

	SavingsAccount saver1(2000.0);
	SavingsAccount saver2(3000.0);
	

	std::cout << "=0.03=" << std::endl;

	saver1.modifyInterestRate(3.0);

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	std::cout << "Saver 1 balance: " << saver1.getBalance() << std::endl;
	std::cout << "Saver 2 balance: " << saver2.getBalance() << std::endl;

	std::cout << "=0.04=" << std::endl;

	saver1.modifyInterestRate(4.0);

	saver1.calculateMonthlyInterest();
	saver2.calculateMonthlyInterest();

	std::cout << "Saver 1 balance: " << saver1.getBalance() << std::endl;
	std::cout << "Saver 2 balance: " << saver2.getBalance() << std::endl;

	return 0;
}