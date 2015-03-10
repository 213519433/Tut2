/************************************
* cpp File for the class Fractions *
*	  my functions definitions      *
************************************/

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
		if (Nunom == Dnom || Dnom / abs(gcd(Nunom, Dnom)) == 1)
		{
			cout << Nunom / Dnom;
		}
		else
		{
			cout << Nunom / abs(gcd(Nunom, Dnom)) << " / " << Dnom / abs(gcd(Nunom, Dnom));
		}
	}
	catch (int)
	{
		cout << "Math Error! : Division by zero encountered.";
	}
}
//Addition
void Fractions::Add()
{
	tryBlock((d2*n1 + d1*n2), (d1*d2));
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
	tryBlock((d2*n1 - d1*n2), (d1*d2));
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
	tryBlock((n1*n2), (d1*d2));
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
	if (d1 == 0 || d2 == 0)
	{
		cout << "Math Error! : Division by zero encountered.";
	}
	else
	{
		tryBlock((n1*d2), (d1*n2));
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