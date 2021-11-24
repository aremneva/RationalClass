
#include "RationalClass.h"

//Class methods
double Rational::addition(Rational secondFraction) {
	
	double num_first = this->numerator / this->denominator;
	double num_secondFraction = secondFraction.numerator / secondFraction.denominator;

	return num_first + num_secondFraction;
}

double Rational::substraction( Rational secondFraction) {

	double num_first = this->numerator / this->denominator;
	double num_secondFraction = secondFraction.numerator / secondFraction.denominator;

	return num_first - num_secondFraction;
}

double Rational::division( Rational secondFraction) {
	double num_first = this->numerator / this->denominator;
	double num_secondFraction = secondFraction.numerator / secondFraction.denominator;

	return num_first / num_secondFraction;
}

double Rational::multiplication(Rational secondFraction) {
	double num_first = this->numerator / this->denominator;
	double num_secondFraction = secondFraction.numerator / secondFraction.denominator;

	return num_first * num_secondFraction;
}

//Constructor
Rational::Rational(double num, double den) {
	this->numerator = num;
	this->denominator = den;
}

//Setters and Getters
void Rational::SetNumerator(double numerator)
{
	this->numerator = numerator;
}

void Rational::SetDenominator(double denominator)
{
	this->denominator = denominator;
}

int Rational::GetNumenator()
{
	return this->numerator;
}

int Rational::GetDenominator()
{
	return this->denominator;
}
