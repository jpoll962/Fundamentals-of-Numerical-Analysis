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

int main()
{
	double exVal, apprVal;
	exVal = 0.1;
	apprVal = 0.01;

	relErr(exVal, apprVal);
}