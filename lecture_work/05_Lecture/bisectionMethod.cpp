//////////////////////////////////////////////////////
//Name: Bisection Method (bisectionMethod.cpp)
//Author: Joe Pollock
//Description: This code will use the Bisection Method
// to find the root of a problem.
//////////////////////////////////////////////////////
//Pseudo-Code:
//	Create variables
//	Identify and check the endpoints
//	Check for a root in the interval given
//	Perform iterations in a For loop
//		Copmute the sign change value
//		Re-assign the end-point based on the location of the root
//	Return the mid-point calculated
///////////////////////////////////////////////////////

#include <iostream>
#include <cmath>

double bisectionMethod(typedef f, double a, double b, double tol)
{
	//Setting up parameters
	double c;
	double error;

	//Check Endpoints
	if (f(a) == 0) return a;
	if (f(b) == 0) return b;

	//Check for a root in the interval
	if (f(a) * f(b) >= 0.0) std::cout << "Error 1!" << std::endl;

	//Perform iterations
	double maxiter = -2.0 * log2(tol / (b - a));
	for (int i = 0; i < maxiter; i++)
	{
		c = 0.5 * (a + b);
		//Compute the sign change value
		double val = f(a) * f(c);
		//Re-assign the end-point based on the location of the root
		if (val < 0.0)
		{
			b = c;
		}
		else
		{
			a = c;
		}
	}
	//Return the midpoint as it is more accurate
	return c;
}