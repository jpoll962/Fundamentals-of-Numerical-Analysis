/////////////////////////////////////////////////////////
// Name: Second Derivative Approximation (SecDeriv.cpp)
// Author: Joe Pollock
// Description: Approximating the Second Derivative of a
//  function to verify the Order of Accuracy.
////////////////////////////////////////////////////////

#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
    // Setting range of decimals to show
    std::cout.precision(16);
    std::cout << std::scientific;

    // Assign Values
    int iter [18] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18}; // Total Iterations
    long double error [18]; // Array to hold error values
    long double x = 2.0L; // Decided value of x for the equation
    long double h [18L] = {1.0L, 0.5L, pow(10.0L,-1.0L), pow(10.0L,-2.0L), pow(10.0L,-3.0L), // Values of h to use in approximations
        pow(10.0L,-4.0L), pow(10.0L,-5.0L), pow(10.0L,-6.0L), pow(10.0L,-7.0L), pow(10.0L,-8.0L),
        pow(10.0L,-9.0L), pow(10.0L,-10.0L), pow(10.0L,-11.0L), pow(10.0L,-12.0L), pow(10.0L,-13.0L),
        pow(10.0L,-14.0L), pow(10.0L,-15.0L), pow(10.0L,-16.0L)};
    long double apprVal [18]; // Array to hold approximate values
    long double exactVal = -cos(x); // Exact value of Second Derivative of equation being approximated


    // Printing Exact Value
    std::cout << "The Exact Value = " << exactVal << std::endl;

    // For loop iterating through function being approximating
    for(int i = 0; i < 18; i++)
    {
        // Placing values in apprVal array through each iteration
        apprVal[i] = ( cos(x + h[i]) - 2.0 * cos(x) + cos(x - h[i]) ) / ( h[i] * h[i] );

        // Placing values in error array through each iteration
        error[i] = std::fabs(exactVal - apprVal[i]);
    }
    std::cout << std::endl;

    // Printing values calculated to the screen in a neat-ish table
    std::cout << "| iter |            h           |       difference       |          error         |" << std::endl;
    std::cout << "|------|------------------------|------------------------|------------------------|" << std::endl;
    for(int i = 0; i < 18; i++)
    {
        i <= 8 ? std::cout << "|  0" : std::cout << "|  "; // If Statement purely for aesthetics
        std::cout << iter[i] << "  | " << h[i] << " | " 
        <<apprVal[i] <<" | " << error[i] << " |" << std::endl;
    }
    std::cout << std::endl;

    return 0;
    // End
}