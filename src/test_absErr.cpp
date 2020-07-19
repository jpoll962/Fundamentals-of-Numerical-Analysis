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

int main()
{
	double exVal, apprVal;
	exVal = 0.1;
	apprVal = 0.01;

	absErr(exVal, apprVal);
}