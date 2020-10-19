////////////////////////////////////////////////////////////////////////////////////////////////////////
//Name: Relative Error (relErr.cpp)
//Author: Joe Pollock
//Description: This file contains the function for calculating 
// Relative Error. Code to test this file is in error.hpp
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Pseudo-Code:
// Variables: Relative Error, Exact Value, and Approximate Value.
//
// Relative Error = ( absolute_value(Exact Value - Approximate Value) ) / ( absolute_value(Exact Value) )
/////////////////////////////////////////////////////////////////////////////////////////////////////////

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