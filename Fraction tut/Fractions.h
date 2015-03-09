/***************************************
* Header File for the Class Fractions *
*		my functions declarations	   *
*         Class Declaration           *
***************************************/
#include <iostream>
#include <math.h>

using namespace std;

#ifndef FRACTIONS_H	// Header File Name
#define FRACTIONS_H

class Fractions
{
private:
	// Member Variables
	int n1, d1;
	int n2, d2;
	int gcd(int, int);
	void tryBlock(int, int);

public:
	// Default constructor
	Fractions(int Nnum1 = 0, int Dnum1 = 0, int Nnum2 = 0, int Dnum2 = 0);

	// Functions
	void Add();
	void Subtract();
	void Multiply();
	void Divide();

	//Overloded Functions
	void Add(int Nnum1, int Dnum1, int Nnum2, int Dnum2);
	void Subtract(int Nnum1, int Dnum1, int Nnum2, int Dnum2);
	void Multiply(int Nnum1, int Dnum1, int Nnum2, int Dnum2);
	void Divide(int Nnum1, int Dnum1, int Nnum2, int Dnum2);

	// Destructor
	~Fractions();
};

#endif