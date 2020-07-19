////////////////////////////////////////////////////////////////////////////////////////////////////////
//Name: Relative Error (relErr.cpp)
//Author: Joe Pollock
//Description: This file contains the function for calculating 
// Relative Error. Code to test this file is in error.h
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Pseudo-Code:
// Variables: Relative Error, Exact Value, and Approximate Value.
//
// Relative Error = ( absolute_value(Exact Value - Approximate Value) ) / ( absolute_value(Exact Value) )
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstdio>
#include <cmath>
#include "relErr.h" //Self-created Error header containing Absolute Error and Relative Error Functions

double relErr(double exVal, double apprVal)
{
	double relErr; //Relative Error Variable

	//Calculating Relative Error
	relErr = (fabs(exVal - apprVal)) / (fabs(exVal)); //fabs() returns a float data type where as abs() only returns an int data type

	// The following code is used to verify that the coder inserted the right numbers for exVal and apprVal
	// The code then prints the resulting calculation as well
	std::cout << "using the Approximate Value: " << apprVal << std::endl;
	std::cout << "Using the Exact Value: " << exVal << std::endl << std::endl;

	std::cout << "The Relative Error is: " << relErr << std::endl;

	return relErr; //Passing the relErr calculated back to the location of being called
}