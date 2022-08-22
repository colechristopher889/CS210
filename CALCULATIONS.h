//Include Guards
#pragma once
#ifndef CALCULATIONS_H
#define CALCULATIONS_H
//Compound Interest Class
class Calc {

public:
    static void yearInterest(double investment, double interest, int years);
    static void yearInterestDeposit(double investment, double deposit, double interest, int years);
};



#endif // !CALCULATIONS_H

