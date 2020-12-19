**Routine Name:** absErr  

**Author:** Joe Pollock  

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  

For example:  
```
g++ absErr.cpp test_absErr.cpp
```

will produce an executable `a.exe` or `a.out` that can be executed with the command `./a.exe` or `./a.out`. If you want a different name, the following will name the
generated executable absoluteError:  
```
g++ absErr.cpp test_absErr.cpp -o absoluteError
```

**Description/Purpose:** This code is used to calculate the absolute error when given an approximate value and an exact value.

**Input:** There are two inputs for using absErr: exVal and apprVal. The variable exVal contains the exact value of the function that is being calculated.
The variable apprVal contains the approximate value received when attempting to calculate a given function.

**Output:** The output (absErr) is the Absolute Error calculated in the absErr.cpp source code.

**Usage/Example:**  

The code provided contains a header file (error.hpp) that holds the relErr() and absErr() function. This is to hold documentation of those functions within
one header file, but there are two separate source files for calculating Absolute Error (absErr.cpp) and Relative Error (relErr.cpp) to maintain different instantiations.
The code for Absolute Error also contains the absErr.cpp source code to calculate the Absolute Error. Finally, there is a test file (test_absErr.cpp) provided to
demonstrate how the absErr.cpp source code computes the Absolute Error.

Output from the commands above:  
```
Using the Approximate Value: 0.01
Using the Exact Value: 0.1

The Absolute Error is: 0.09
```

The output prints the Approximate Value passed to the absErr() function and the Exact Value passed to the absErr() function.
Then the Absolute Error computed is printed.

**Implementation/Code:** The following is the code for absErr():  
Code for error.hpp:  
```C++
#pragma once
#ifndef ERROR_HPP
#define ERROR_HPP

double absErr(double exVal, double apprVal); //Absolute Error Function
double relErr(double exVal, double apprVal); //Relative Error Function

#endif /*ERROR_HPP*/
```

Code for absErr.cpp:  
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

Code for test_absErr.cpp:  
```C++
#include "error.hpp" //Self-created Error header containing Absolute Error and Relative Error Functions

int main()
{
	double exVal, apprVal;

	//Provides values for exVal and apprVal, readily available to be changed as desired
	exVal = 0.1;
	apprVal = 0.01;

	//Calls absErr(exVal, apprVal) function found in absErr.cpp
	absErr(exVal, apprVal);
}
```

**Last Modified:** October/2020
