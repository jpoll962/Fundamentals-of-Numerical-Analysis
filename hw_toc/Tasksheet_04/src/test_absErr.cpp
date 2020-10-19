//////////////////////////////////////////////////////////////////
//Name: Absolute Error (absErr.cpp)
//Author: Joe Pollock
//Description: This file contains the function for calculating 
// Absolute Error. Code to test this file is in error.hpp
//////////////////////////////////////////////////////////////////
//Pseudo-Code:
// Variables: Absolute Error, Exact Value, and Approximate Value.
//
// Absolute Error = absolute_value(Approximate Value - Exact Value)
///////////////////////////////////////////////////////////////////

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