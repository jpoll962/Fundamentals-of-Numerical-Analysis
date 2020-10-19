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

/*****Simple code to test the relErr AND absErr functions
 * #include "error.hpp" //Self-created error header containing Absolute Error and Relative Error Functions
 *
 * int main()
 * {
 *	double x, y; //x is the exact value; y is the approximate value;
 *
 *  std::cout << "Exact Value? ";
 * 	std::cin >> x;
 * 	std::cout << std::endl;
 * 
 * 	std::cout << "Approximate Value? ";
 * 	std::cin >> y;
 *
 * 	absErr(x, y);
 * 	relErr(x, y);
 * }
 *
*/
