**Routine Name:** relErr  

**Author:** Joe Pollock  

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  

For example:  
```
g++ relErr.cpp test_relErr.cpp
```  

will produce an executable `a.exe` or `a.out` that can be executed with the command `./a.exe` or `./a.out`. If you want a different name, the following will name the
generated executable relativeError:  
```
g++ relErr.cpp test_relErr.cpp -o relativeError
```

**Description/Purpose:** This code is intended to calculate the relative error when given an exact value and approximate value.  

**Input:** The test function passes in an exact value (exVal) and an approximate value (apprVal) into the relErr(exVal, apprVal) function
to calculate the relative error.  

**Output:** The output prints the exact value, approximate value given to the code, and the relative error calculated.  

**Usage/Example:**

In order to use the relErr.cpp source file, I have created a test_relErr.cpp source file that passes in the values presented in the test code.  

Output from the commands above:  
```
Using the Approximate Value: 0.01
Using the Exact Value: 0.1

The Relative Error is: 0.9
```

The variable exVal is used to insert the exact value calculated. The variables apprVal is used to insert the approximations of the formula in question.
The header file error.hpp is used to declare absErr and relErr in the same header file, but relErr.cpp is created without absErr.cpp to ensure two separate
instantiations. The source file test_relErr.cpp can be altered to identify the relative error of a calculation.  

**Implementation/Code:** The following is the code for relErr():  
Code for error.hpp:  
```C++
#pragma once
#ifndef ERROR_HPP
#define ERROR_HPP

double absErr(double exVal, double apprVal); //Absolute Error Function
double relErr(double exVal, double apprVal); //Relative Error Function

#endif /*ERROR_HPP*/
```

Code for relErr.cpp:  
```C++
#include <iostream>
#include <cmath>
#include "error.hpp" //Self-created Error header containing Absolute Error and Relative Error Functions

double relErr(double exVal, double apprVal)
{
	double relErr; //Relative Error Variable

	//Calculating Relative Error
	relErr = ( fabs(exVal - apprVal) ) / ( fabs(exVal) ); //fabs() returns float data type; abs() returns int data type

	// The following code is used to verify that the coder inserted the right numbers for exVal and apprVal
	// The code then prints the resulting calculation as well
	std::cout << "Using the Approximate Value: " << apprVal << std::endl;
	std::cout << "Using the Exact Value: " << exVal << std::endl << std::endl;

	std::cout << "The Relative Error is: " << relErr << std::endl;

	return relErr; //Passing the relErr calculated back to the location of being called
}
```

Code for test_relErr.cpp:  
```C++
#include "error.hpp" //Self-created Error header containing Absolute Error and Relative Error Functions

int main()
{
	double exVal, apprVal;

	//Provides values for exVal and apprVal, readily available to be changed as desired
	exVal = 0.1;
	apprVal = 0.01;

	//Calls relErr(exVal, apprVal) function found in relErr.cpp
	relErr(exVal, apprVal);
}
```

**Last Modified:** October/2020
[Back to Software Manual](https://github.com/jpoll962/math4610/blob/master/hw_toc/SoftwareManual/SoftwareManual_toc.md)