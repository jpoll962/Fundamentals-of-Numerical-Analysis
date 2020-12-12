# Solutions for Tasksheet 4

## Task 1:

  I have created a relErr.cpp file and absErr.cpp file with a shared header file (error.hpp), so they remain separate instances. I have documented both .cpp files in my Software Manual. In addition, I have added the error files to my shared library.

Below is the error.hpp code:
```C++
#pragma once
#ifndef ERROR_HPP
#define ERROR_HPP

double absErr(double exVal, double apprVal); //Absolute Error Function
double relErr(double exVal, double apprVal); //Relative Error Function

#endif /*ERROR_HPP*/
```

Below is the relErr.cpp code:
```C++
#include <iostream>
#include <cmath>
#include "error.hpp" //Self-created Error header containing Absolute Error and Relative Error Functions

double relErr(double exVal, double apprVal)
{
	double relErr; //Relative Error Variable

	//Calculating Relative Error
	relErr = (fabs(exVal - apprVal)) / (fabs(exVal)); //fabs() returns float data type; abs() returns int data type

	// The following code is used to verify that the coder inserted the right numbers for exVal and apprVal
	// The code then prints the resulting calculation as well
	std::cout << "Using the Approximate Value: " << apprVal << std::endl;
	std::cout << "Using the Exact Value: " << exVal << std::endl << std::endl;

	std::cout << "The Relative Error is: " << relErr << std::endl;

	return relErr; //Passing the relErr calculated back to the location of being called
}
```

Below is the absErr.cpp code:
```C++
#include <iostream>
#include <cmath>
#include "error.hpp" //Self-created Error header containing Absolute Error and Relative Error Functions

double absErr(double exVal, double apprVal)
{
	double absErr; //Absolute Error Variable

	//Calculating Absolute Error
	absErr = fabs(exVal - apprVal); //fabs() returns a float data type where as abs() only returns an int data type

	// The following code is used to verify that the coder inserted the right numbers for exVal and apprVal
	// The code then prints the resulting calculation as well
	std::cout << "Using the Approximate Value: " << apprVal << std::endl;
	std::cout << "Using the Exact Value: " << exVal << std::endl << std::endl;

	std::cout << "The Absolute Error is: " << absErr << std::endl;

	return absErr; //Passing the absErr calculated back to the location of being called
}
```

## Task 2:

I have created a graphics routine in Python for a 2D plot of data that includes:
* Graph string expressions in a Python module.
* Include a loop to graph multiple expressions for comparison.
* Use different colors for the graphs of the functions.
* Hardcode axes labels.
* Do note include a title for the graph.
* Include a legend for the curves.

The code is as follows:			**(Code In-Progress)**
```Python
import matplotlib.pyplot as plt
import numpy as np

# Initialize two arrays to store the input data in
# -------------------------------------------------
xpts=[]
ypts=[]

# Identify number of sub-plots from the user
# ------------------------------------------
plot_num = input('Enter number of expressions you want to plot:\n')

# Request from user the endpoints of the interval that defines the graphical domain
# ----------------------------------------------------------------------------------
xmin = input('Enter left endpoint of an interval:\n')
xmin = float(xmin)
xmax = input('Enter right endpoint of an interval:\n')
xmax = float(xmax)

# Request from user the number of points for graphing the expression given
# -------------------------------------------------------------------------
nvals = input('Enter the number of points for graphing the expression:\n')
nvals = int(nvals)
delx = ( xmax - xmin ) / float(nvals)
i = 0
while i<=nvals:
        x = xmin + float(i) * delx
        xpts.append(x)
        i += 1

# Graphics for the input given
# -----------------------------
plt.xlim(xmin, xmax)

# Loop over the number of expressions specified
# ---------------------------------------------
expression = input('Enter the next expression (include np.) for f(x):\n')

# Loop over the points, evaluating the expression
# -----------------------------------------------
i = 0
while i <= nvals:
        x = xpts[i]
        ypts.append(eval(expression))
        i += 1

# Plot the data using matplotlib.pyplot
# -------------------------------------
plt.plot(xpts, ypts, label=expression)

# Hardcoding axes labels for the 2D plot
# ---------------------------------------
plt.xlabel('x-axis')
plt.ylabel('y-axis')

# Create a legend for the plot
# -----------------------------
plt.legend()

# Show the plot of the data
# -------------------------
plt.show()
```

Since I am not coding with Python on a general level for this class, I have not included it in my archive, but I have created a page for the
graphics routine in my Software Manual.

## Task 3:

I have created a routine that calculates the root of a given function by the Fixed Point Iteration Method. The code requires inputs for the initial approximation, a tolerable amount of error, and the maximum amount of iterations to perform when searching for the root.

The code will be in my software manual. The code is also given below.

The code is as follows:
```C++
#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>

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
	    std::cout << "Iteration " << iter << ":\t x1 = " << std::setw(10) << x1 << " and f(x1) = " << std::setw(10) << f(x1) << std::endl;
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
```


## Task 4:



## Task 5:



## Task 6:

