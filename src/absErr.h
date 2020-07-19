//#pragma once
#ifndef ABSERR_H
#define ABSERR_H

#include <iostream>
#include <cstdio>
#include <cmath>

double absErr(double exVal, double apprVal);

#endif /*ABSERR_H*/

/*****Simple code to test the relErr and absErr functions
 * #include <iostream>
 * #include <cstdio>
 * #include <cmath>
 * #include "absErr.h" or #include "relErr.h" //Self-created Error header containing the Absolute Error Function
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
 * }
 *
*/