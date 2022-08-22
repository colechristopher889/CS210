#include <iostream>
#include <iomanip>
#include "CALCULATIONS.h"

using namespace std;


//Define Calc functions with output and logic
void Calc::yearInterest(double initialInvestment, double interestRate, int years) {
	//Define local variables
	
	double endBalance = initialInvestment;
	double endInterest = 0;
	double monthInterest = 0;

	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "========================================================" << endl;
	cout << "Year     " << "Year End Balance     " << "Year End Earned Interest  " << endl;
	cout << "----------------------------------------------------------" << endl;
	//iterate through years
	for (int i = 1; i < years + 1; i++) {
		//Logic
		monthInterest = endBalance * ((interestRate / 100) / 12);
		endInterest = monthInterest * 12;
		endBalance = endBalance + endInterest;
		//Output values to user
		cout << i << "          $" << endBalance << "          $" << endInterest << fixed << setprecision(2) << endl;
	}
			
}

void Calc::yearInterestDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int years) {
	//Define local variables
	double endBalance = initialInvestment;
	double endInterest;
	double monthInterest;

	cout << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "=====================================================" << endl;
	cout << "Year     " << "Year End Balance     " << "Year End Earned Interest  " << endl;
	cout << "----------------------------------------------------------" << endl;
	//iterate through years
	for (int i = 1; i < years + 1; i++) {
		//Logic
		monthInterest = (endBalance + monthlyDeposit) * ((interestRate / 100) / 12);
		endInterest = monthInterest * 12;
		endBalance = endBalance + endInterest + (monthlyDeposit * 12);
		//Output values to user
		cout << i << "          $" << endBalance << "          $" << endInterest << endl;
	}
}
