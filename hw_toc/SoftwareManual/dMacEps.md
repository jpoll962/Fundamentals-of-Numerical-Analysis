**Routine Name:** dMacEps

**Author:** Joe Pollock

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ dMacEps.cpp test_dMacEps.cpp

will produce an executable **a.exe** that can be executed with the command **./a.exe**. If you want a different name,
the following will name the executable dMachineEpsilon:

    g++ dMacEps.cpp test_dMacEps.cpp -o dMachineEpsilon

**Description/Purpose:** This routine will compute the double precision value for the machine epsilon or the number of digits
in the representation of real numbers in double precision. This is a routine for analyzing the behavior of any computer. This
usually will need to be run one time for each computer.

**Input:** There are no inputs needed for dMacEps.cpp. Even though there are arguments supplied, the real purpose is to
return values in those variables.

**Output:** This routine returns a double precision value for the number of decimal digits that can be represented on the
computer being tested.

**Usage/Example:**

The routine has two arguments needed to return the values of the precision in terms of the smallest number that can be
represented. Since the code is written in terms of a C++ subroutine, the values of the machine epsilon and
the power of two that gives the machine epsilon.

Output from the commands above results in:

      When Diff = 0, Eps = 1.11022e-16.

Diff is monitoring the change in epsilon through each iteration. Diff = 0 is the result of Epsilon reaching a very small number
(which is the second value). The number of decimal digits that can be represented is roughly sixteen (E-16 on the
end of the second value).

**Implementation/Code:** The following is the code for dMacEps()
Code of macEps.hpp
```
#pragma once
#ifndef MACEPS_HPP
#define MACEPS_HPP

float sMacEps(); //Single Precision Machine Epsilon Function
double dMacEps(); //Double Precision Machine Epsilon Function

#endif /*MACEPS_HPP*/
```

Code of dMacEps.cpp:
```
#include <iostream>
#include "macEps.hpp"

double dMacEps()
{
	double one = 1.0;	//One
	double eps = 1.0;	//Epsilon

	//For Loop to calculate the Machine Epsilon
	for (int i = 1; i < 1000; i++)
	{
		double diff = one - (one + eps);
		//Prints out Diff and Eps through each loop iteration
		std::cout << "Diff = " << diff << std::endl;
		std::cout << "Eps = " << eps << std::endl;

		//This if statement checks if diff == 0, returning diff it true and moving along if false
		if (diff == 0.0) return diff;
		eps = 0.5 * eps;
	}
	return 0; //This ends the function
}
```

Code for test_dMacEps.cpp:
```
#include <iostream>
#include "macEps.hpp"

int main()
{
	dMacEps(); //Calls the dMacEps function found in dMacEps.cpp
}
```

**Last Modified:** October/2020
