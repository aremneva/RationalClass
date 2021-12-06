
#include "RationalClass.h"

//Class methods
double Rational::addition(Rational secondFraction) {

	return DecimalForm()+ secondFraction.DecimalForm();
}

double Rational::substraction( Rational secondFraction) {

	return DecimalForm() - secondFraction.DecimalForm();
}

double Rational::division( Rational secondFraction) {

	return DecimalForm() / secondFraction.DecimalForm();
}

double Rational::multiplication(Rational secondFraction) {

	return DecimalForm() * secondFraction.DecimalForm();
}

//Constructor
Rational::Rational(double num, double den) {
	numerator = num;
	denominator = den;
}

//Setters and Getters
void Rational::SetNumerator(double numerator)
{
	numerator = numerator;
}

void Rational::SetDenominator(double denominator)
{
	denominator = denominator;
}

int Rational::GetNumenator()
{
	return numerator;
}

int Rational::GetDenominator()
{
	return denominator;
}



double Rational::DecimalForm()
{
	return this->numerator / this->denominator;
}
