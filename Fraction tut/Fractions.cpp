/************************************
* cpp File for the class Fractions *
*	  my functions definitions     *
************************************
*/

#include "Fractions.h"

// Default Constructor
Fractions::Fractions(int Nnum1, int Dnum1, int Nnum2, int Dnum2)
{
	n1 = Nnum1; d1 = Dnum1; n2 = Nnum2; d2 = Dnum2;
}
// Try Bock
void Fractions::tryBlock(int Nunom, int Dnom)
{
	try
	{
		if (Dnom == 0) throw Dnom;
		cout << Nunom << " / " << Dnom;
	}
	catch (int)
	{
		cout << "Math Error! : Division by zero encountered." << endl;
	}
}
//Addition
void Fractions::Add()
{
	int dvsr = gcd(abs(d2*n1 + d1*n2), abs(d1*d2));

	if (abs(d2*n1 + d1*n2) == abs(d1*d2) || abs(d1*d2) / dvsr == 1)
	{
		tryBlock((d2*n1 + d1*n2), (d1*d2));
	}
	else
	{
		cout << (d2*n1 + d1*n2) / dvsr << " / " << (d1*d2) / dvsr << endl;
	}
}
// Overload Addition
void Fractions::Add(int Nnum1, int Dnum1, int Nnum2, int Dnum2)
{
	n1 = Nnum1; d1 = Dnum1; n2 = Nnum2; d2 = Dnum2;
	Add();
}
// Subtraction
void Fractions::Subtract()
{
	int dvsr = gcd(abs(d1*n2 - d2*n1), abs(d1*d2));

	if (abs(d2*n1 - d1*n2) == abs(d1*d2) || (d2*n1 - d1*n2) == 0 || abs(d1*d2) / dvsr == 1)
	{
		tryBlock((d2*n1 - d1*n2), (d1*d2));
	}
	else
	{
		cout << (d2*n1 - d1*n2) / dvsr << " / " << (d1*d2) / dvsr << endl;
	}
}
// Subtraction Overload
void Fractions::Subtract(int Nnum1, int Dnum1, int Nnum2, int Dnum2)
{
	n1 = Nnum1; d1 = Dnum1; n2 = Nnum2; d2 = Dnum2;
	Subtract();
}
// Multiplication
void Fractions::Multiply()
{
	int dvsr = gcd(abs(n1*n2), abs(d1*d2));

	if (abs(n1*n2) == abs(d1*d2) || abs(d1*d2) / dvsr == 1 || (d1*d2) == 0)
	{
		tryBlock((n1*n2), (d1*d2));
	}
	else
	{
		cout << (n1*n2) / dvsr << " / " << (d1*d2) / dvsr << endl;
	}
}
//Multiplication Overload
void Fractions::Multiply(int Nnum1, int Dnum1, int Nnum2, int Dnum2)
{
	n1 = Nnum1; d1 = Dnum1; n2 = Nnum2; d2 = Dnum2;
	Multiply();
}
// Division
void Fractions::Divide()
{
	int dvsr = gcd(abs(n1*d2), abs(d1*n2));

	if (abs(n1*d2) == abs(d1*n2) || abs(d1*n2 / dvsr) == 1)
	{
		tryBlock((n1*d2), (d1*n2));
	}
	else
	{
		cout << (n1*d2) / dvsr << " / " << (d1*n2) / dvsr << endl;
	}
}
// Division Overload
void Fractions::Divide(int Nnum1, int Dnum1, int Nnum2, int Dnum2)
{
	n1 = Nnum1; d1 = Dnum1; n2 = Nnum2; d2 = Dnum2;
	Divide();
}
// Greatest Common Diviser
int Fractions::gcd(int Numa, int Deno)
{
	if (Deno == 0) return Numa;
	else return gcd(Deno, Numa % Deno);
}
// Destructor
Fractions :: ~Fractions()
{
	cout << endl << " Results Destroyed" << endl << endl;
}