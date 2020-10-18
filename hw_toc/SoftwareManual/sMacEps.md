**Routine Name:** sMacEps

**Author:** Joe Pollock

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ sMacEps.cpp test_sMacEps.cpp

will produce an executable **a.exe** that can be executed with the command **./a.exe**. If you want a different name, the following
will name the executable sMachineEpsilon:

    g++ sMacEps.cpp test_sMacEps.cpp -o sMachineEpsilon

**Description/Purpose:** This routine will compute the single precision value for the machine epsilon or the number of digits
in the representation of real numbers in single precision. This is a routine for analyzing the behavior of any computer. This
usually will need to be run one time for each computer.

**Input:** There are no inputs needed for sMacEps.cpp. Even though there are arguments supplied, the real purpose is to
return values in those variables.

**Output:** This routine returns a single precision value for the number of decimal digits that can be represented on the
computer being tested.

**Usage/Example:**

The routine has two arguments needed to return the values of the precision in terms of the smallest number that can be
represented. Since the code is written in terms of a C++ subroutine, the values of the machine epsilon and
the power of two that gives the machine epsilon.

Output from the commands above result in:

When diff = 0, Eps = 5.96046448E-08

Diff is the variable to determine when Eps has reached the smallest number possible for this level of precision. Eps is the Machine Epsilon
for the Machine being used. The number of decimal digits that can be represented is roughly eight (E-08 on the end of the second value).

**Implementation/Code:** The following is the code for sMacEps()
Code for macEps.hpp:
```
#pragma once
#ifndef MACEPS_HPP
#define MACEPS_HPP

float sMacEps(); //Single Precision Machine Epsilon Function
double dMacEps(); //Double Precision Machine Epsilon Function

#endif /*MACEPS_HPP*/
```

Code for sMacEps.cpp:
```
#include <iostream>
#include "macEps.hpp" //This header contains two functions sMacEps() and dMacEps()

float sMacEps()
{
	float one = 1.0;	//One
	float eps = 1.0;	//Epsilon

	//For Loop to calculate the Machine Epsilon
	for (int i = 1; i < 1000; i++)
	{
		float diff = one - (one + eps);
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

Code for test_sMacEps.cpp:
```
#include <iostream>
#include "macEps.hpp"

int main()
{
	sMacEps(); //Calls the sMacEps function found in sMacEps.cpp
}
```
**Last Modified:** October/2020
