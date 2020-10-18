# Solutions for Tasksheet 4

## Task 1:

  I have created a relErr.cpp file and absErr.cpp file with a shared header file (error.hpp), so they remain separate instances. I have documented both .cpp files in my Software Manual. In addition, I have added the error files to my shared library.

Below is the error.hpp code:
```
#pragma once
#ifndef ERROR_HPP
#define ERROR_HPP

double absErr(double exVal, double apprVal); //Absolute Error Function
double relErr(double exVal, double apprVal); //Relative Error Function

#endif /*ERROR_HPP*/
```

Below is the relErr.cpp code:
```
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
```
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



## Task 3:



## Task 4:



## Task 5:



## Task 6:

