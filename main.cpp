//3. Создайте класс с именем Rational для выполнения действий с дробями.
#include "RationalClass.h"

using namespace std;

int main() {
	double numFirst;
	double denFirst;

	double numSecond;
	double denSecond;

	cout << "\nEnter a first fraction: ";
	cin >> numFirst >> denFirst;

	cout << "\nEnter a seconf fraction: ";
	cin >> numSecond>> denSecond;

	Rational first(numFirst,denFirst);
	Rational second(numSecond,denSecond);

	cout<<"\nAddition: " << first.addition(second);
	cout << "\nSubstraction: " << first.substraction(second);
	cout << "\nMultiplication: " << first.multiplication(second);
	cout << "\nDivision: " << first.division(second);

	return 0;
}