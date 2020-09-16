# MATH4610 - Fundamentals of Computational Mathematics Software Manual

**Routine Name:**           smaceps

**Author:** Joe Pollock

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example,

    g++ sMacEps.cpp

will produce an executable **a.exe** that can be executed with the command **./a.exe**. If you want a different name, the following will accomplish this:

    g++ sMacEps.cpp -o sMachineEpsilon

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

Output from the lines above:

      24   5.96046448E-08

The first value (24) is the number of binary digits that define the machine epsilon and the second is related to the
decimal version of the same value. The number of decimal digits that can be represented is roughly eight (E-08 on the
end of the second value).

**Implementation/Code:** The following is the code for sMacEps()

#include <iostream>
#include "macEps.h" //This header contains two functions sMacEps() and dMacEps()

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

**Last Modified:** July/2020
