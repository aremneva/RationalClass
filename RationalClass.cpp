
#include "RationalClass.h"

//Class methods
double Rational::addition(Rational secondFraction) {

	return this->DecimalForm()+ secondFraction.DecimalForm();
}

double Rational::substraction( Rational secondFraction) {

	return this->DecimalForm() - secondFraction.DecimalForm();
}

double Rational::division( Rational secondFraction) {

	return this->DecimalForm() / secondFraction.DecimalForm();
}

double Rational::multiplication(Rational secondFraction) {

	return this->DecimalForm() * secondFraction.DecimalForm();
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

double Rational::DecimalForm()
{
	return this->numerator / this->denominator;
}
