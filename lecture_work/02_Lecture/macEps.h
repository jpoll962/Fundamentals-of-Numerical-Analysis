/////////////////////////////////////////////////////////////////
//Name: Machine Epsilon Calculator (macEps.h)
//Author: Joe Pollock
//Description: Code created for MATH4610 at USU to
// compute Single Precision and Double Precision Machine Epsilon.
//////////////////////////////////////////////////////////////////
//Pseudo-Code:
// For both Functions (only difference is datatypes):
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
///////////////////////////////////////////////////////////////////
//#pragma once
#ifndef MACEPS_H
#define MACEPS_H

float sMacEps();
double dMacEps();

#endif /*MACEPS_H*/