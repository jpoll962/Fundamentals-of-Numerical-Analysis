//////////////////////////////////////////////////
// Name: Fixed Point Iteration Analysis
// Author: Joe Pollock
// Description: Find the root of a given function
//  through Fixed Point Iteration.
//////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

// Define the function
#define   f(x)   cos(x) - 3 * x + 1
// Write f(x) as x = g(x) and define g(x) here
#define   g(x)   ( 1 + cos(x) ) / 3

int main()
{
    int iter = 1;
    int max_iter;
	float x0, x1, error;

	// Setting precision and writing floating point values in fixed-point notation.
	std::cout << std::setprecision(6) << std::fixed;
	// Inputs
	std::cout << "Enter initial approximation: ";
	std::cin >> x0;

	std::cout << "Enter tolerable error: ";
	std::cin >> error;

	std::cout << "Enter maximum iteration: ";
	std::cin >> max_iter;
    std::cout << std::endl;

	// Implementing Fixed Point Iteration
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Fixed Point Iteration Method" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	do
	{
	    x1 = g(x0);
	    std::cout << "Iteration " << iter << ":\t x1 = " << std::setw(10) << x1
			<< " and f(x1) = " << std::setw(10) << f(x1) << std::endl;
	    iter = iter + 1;

	    if(iter > max_iter)
	    {
		    std::cout << "Not Convergent.";
		    std::exit(0);
		}

		x0 = x1;

	} while( std::fabs(f(x1)) > error);

	std::cout << std::endl;
    std::cout << "The root is " << x1 << std::endl;

	return(0);
}