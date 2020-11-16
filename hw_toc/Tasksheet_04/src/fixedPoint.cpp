//////////////////////////////////////////////////
// Name: Fixed Point Iteration Analysis
// Author: Joe Pollock
// Description: Find the root of a given function
//  through Fixed Point Iteration.
//////////////////////////////////////////////////

#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>

double dMacEps(double epsilon) // Altered form of Double Machine Precision Calculator
{
	double one = 1.0;	//One
	double eps = 1.0;	//Epsilon

	//For Loop to calculate the Machine Epsilon
	for (int i = 1; i < 1000; i++)
	{
		double diff = one - (one + eps);

		//This if statement checks if diff == 0, returning epsilon if true and moving along if false
		if (diff == 0.0) return eps;
		eps = 0.5 * eps;
	}
	return 0; //This ends the function
}

// Define the function
#define   f(x)   cos(x) - 3 * x + 1

// Write f(x) as x = g(x) and define g(x) here
#define   g(x)   ( 1 + cos(x) ) / 3


int main()
{
    int iter = 0;
    int max_iter;
	double x[iter];
	double tol = dMacEps(tol);

	// Setting precision and writing floating point values in fixed-point notation.
	std::cout << std::setprecision(6) << std::fixed;
	// Inputs
	std::cout << "Enter initial approximation: ";
	std::cin >> x[0];

	std::cout << "Enter maximum iteration (ex: 200): ";
	std::cin >> max_iter;
    std::cout << std::endl;

	// Implementing Fixed Point Iteration
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Fixed Point Iteration Method" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	do
	{
		iter++;
		std::cout << "Iteration " << iter << ":\t x" << iter << " = " << std::setw(10) << x[iter]
			<< " and f(x" << iter << ") = " << std::setw(10) << f(x[iter]) << std::endl;

	    if( iter > max_iter )
	    {
		    std::cout << "Not Convergent.";
		    std::exit(0);
		}

	} while( std::fabs(x[iter] - x[iter - 1]) < tol );

	std::cout << std::endl;
    std::cout << "The root is " << x[max_iter] << std::endl;

	return(0);
}