#pragma once
#include <iostream>
using namespace std;

class Rational {
private:
	double numerator;
	double denominator;

public:
	Rational(double num, double den);

	void SetNumerator(double numerator);
	void SetDenominator(double denominator);
	int GetNumenator();
	int GetDenominator();
	
	double DecimalForm();

	double addition(Rational secondFraction);
	double substraction(Rational secondFraction);
	double division(Rational secondFraction);
	double multiplication(Rational secondFraction);
};