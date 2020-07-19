//////////////////////////////////////////////////////////////////
//Name: Absolute Error (absErr.cpp)
//Author: Joe Pollock
//Description: This file contains the function for calculating 
// Absolute Error. Code to test this file is in error.h
//////////////////////////////////////////////////////////////////
//Pseudo-Code:
// Variables: Absolute Error, Exact Value, and Approximate Value.
//
// Absolute Error = absolute_value(Approximate Value - Exact Value)
///////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdio>
#include <cmath>
#include "absErr.h" //Self-created Error header containing Absolute Error and Relative Error Functions

double absErr(double exVal, double apprVal)
{
	double absErr; //Absolute Error Variable

	//Calculating Absolute Error
	absErr = fabs(exVal - apprVal); //fabs() returns a float data type where as abs() only returns an int data type

	// The following code is used to verify that the coder inserted the right numbers for exVal and apprVal
	// The code then prints the resulting calculation as well
	std::cout << "using the Approximate Value: " << apprVal << std::endl;
	std::cout << "Using the Exact Value: " << exVal << std::endl << std::endl;

	std::cout << "The Absolute Error is: " << absErr << std::endl;

	return absErr; //Passing the absErr calculated back to the location of being called
}