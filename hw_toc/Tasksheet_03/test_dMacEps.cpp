//////////////////////////////////////////////
//Name: Double Precision Machine Epsilon (dMacEps.cpp)
//Author: Joe Pollock
//Description: Code created for MATH4610 at USU to
// compute Double Precision Machine Epsilon.
//////////////////////////////////////////////
//Pseudo-Code: 
//comment: initialize the constant one and the small value
// one = 1.0;
// eps = 1.0;
//comment: loop over the computing the difference between 1 and 1 plus a bit
// for i = 1 until i = 1,000
//	diff = one - (one + eps);
//	print diff, eps;
//	if (diff == 0.0) return;
//	eps = eps / 2;
// end
///////////////////////////////////////////////

#include <iostream>
#include "macEps.hpp"

int main()
{
	dMacEps(); //Calls the dMacEps function found in dMacEps.cpp, connected to this file through macEps.h
}