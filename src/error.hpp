////////////////////////////////////////////////////////////////////////////////////////////////////////
//Name: Relative Error and Absolute Error (error.hpp)
//Author: Joe Pollock
//Description: This  header file contains the functions for calculating 
// Relative Error and Absolute Error. Code to test these function is at the bottom.
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Pseudo-Code:
// absErr(exVal, apprVal)
// relErr(exVal, apprVal)
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#ifndef ERROR_HPP
#define ERROR_HPP

double absErr(double exVal, double apprVal); //Absolute Error Function
double relErr(double exVal, double apprVal); //Relative Error Function

#endif /*ERROR_HPP*/

/*****Simple code to test the relErr and absErr functions
 * #include <iostream>
 * #include <cstdio>
 * #include <cmath>
 * #include "error.hpp" //Self-created Error header containing Absolute Error and Relative Error Functions
 *
 * int main()
 * {
 *	double x, y;
 *
 * 	std::cout << "Approximate Value? ";
 * 	std::cin >> y;
 *
 * 	std::cout << "Exact Value? ";
 * 	std::cin >> x;
 * 	std::cout << std::endl;
 *
 * 	absErr(x, y);
 * 	relErr(x, y);
 * }
 *
*/
