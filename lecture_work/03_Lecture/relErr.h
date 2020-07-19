#pragma once
#ifndef RELERR_H
#define RELERR_H

#include <iostream>
#include <cstdio>
#include <cmath>

double relErr(double exVal, double apprVal);

#endif /*RELERR_H*/

/*****Simple code to test the relErr function
 * #include <iostream>
 * #include <cstdio>
 * #include <cmath>
 * #include "relErr.h" //Self-created Error header containing the Relative Error Function
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
 * 	relErr(x, y);
 * }
 *
*/