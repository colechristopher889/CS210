// AirgeadBankingApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Chris Cole

#include "CALCULATIONS.h"
#include <iostream>

using namespace std;
//Menu function for user input
void Menu(double& initialInvestment, double& monthlyDeposit, double& interestRate, int& year) {
	cout << "-------------------------" << endl;
	cout << "--------Data Input-------" << endl;
	cout << "Initial Investment Amount:";
	cin >> initialInvestment;
	cout << "Monthly Deposit:";
	cin >> monthlyDeposit;
	cout << "Annual Interest:";
	cin >> interestRate;
	cout << "Number Of Years:";
	cin >> year;
	cout << "-------------------------" << endl;
}
//Driver code
int main()
{
	
	//Declare variables
	double initialAmount = 0;
	double monthlyDeposit;
	double annualRate;
	int numberYears;
//Call menu function
	Menu(initialAmount, monthlyDeposit, annualRate, numberYears);
//Call Calc functions 
	Calc::yearInterest(initialAmount, annualRate, numberYears);
	Calc::yearInterestDeposit(initialAmount, monthlyDeposit, annualRate, numberYears);
}

