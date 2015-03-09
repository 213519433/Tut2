/*****************************
* Fraction Program : Class  *
*****************************/

#include <iostream>
#include <string>
#include <math.h>

#include "Fractions.h"

using namespace std;

int main()
{
	int Nunom1, Dnom1, Nunom2, Dnom2;

	cout << endl << endl << "  Testing of Fractions Class" << endl << " ============================" << endl;
	cout << " Enter first fraction:" << endl << " Numarater(1): ";		/* Inputs of first fraction */
	cin >> Nunom1; cout << " Denominater(1): "; cin >> Dnom1;
	cout << endl << " ----------------------------" << endl;

	cout << " Enter second fraction:" << endl << " Numarater(2): ";		/* Inputs of second fraction */
	cin >> Nunom2; cout << " Denominater(2): "; cin >> Dnom2;
	cout << " ----------------------------" << endl;

	Fractions fract(Nunom1, Dnom1, Nunom2, Dnom2); // Object

	cout << endl << " " << Nunom1 << " / " << Dnom1 << " + " << Nunom2 << " / " << Dnom2 << " = "; fract.Add();			// ADDITION of fractions results
	cout << endl << " " << Nunom1 << " / " << Dnom1 << " - " << Nunom2 << " / " << Dnom2 << " = "; fract.Subtract();	// SUBTRACTION of fractions results
	cout << endl << " " << Nunom1 << " / " << Dnom1 << " * " << Nunom2 << " / " << Dnom2 << " = "; fract.Multiply();	// MULTIPLICATION of fractions results
	cout << endl << " " << Nunom1 << " / " << Dnom1 << " / " << Nunom2 << " / " << Dnom2 << " = "; fract.Divide();		// DIVISION of fractions results
	cout << endl << " ----------------------------" << endl; fract.~Fractions();
	cout << " ============================" << endl << "	   **End**" << endl << endl;

	system("pause");
	return 0;
}