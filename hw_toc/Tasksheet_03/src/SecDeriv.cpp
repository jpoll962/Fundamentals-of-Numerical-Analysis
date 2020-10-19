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
    //Assign Values
    int iter [18] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    long double error [18];
    long double x = 2.0L;
    long double h [18L] = {1.0L, 0.5L, pow(10.0L,-1.0L), pow(10.0L,-2.0L), pow(10.0L,-3.0L),
        pow(10.0L,-4.0L), pow(10.0L,-5.0L), pow(10.0L,-6.0L), pow(10.0L,-7.0L), pow(10.0L,-8.0L),
        pow(10.0L,-9.0L), pow(10.0L,-10.0L), pow(10.0L,-11.0L), pow(10.0L,-12.0L), pow(10.0L,-13.0L),
        pow(10.0L,-14.0L), pow(10.0L,-15.0L), pow(10.0L,-16.0L)};
    long double apprVal [18];
    long double exactVal = -cos(x);


    // Printing Exact Value
    std::cout << "The Exact Value = " << exactVal << std::endl;

    for(int i = 0; i < 18; i++)
    {
        apprVal[i] = ( cos((x) + (h[i])) - 2.0 * cos(x) + cos((x) - (h[i])) ) / ( pow(h[i],2) );
        error[i] = std::abs(exactVal - apprVal[i]);
    }
    std::cout << std::endl;

    std::cout << "| iter |            h           |       difference       |          error         |" << std::endl;
    std::cout << "|------|------------------------|------------------------|------------------------|" << std::endl;
    for(int i = 0; i < 18; i++)
    {
        i <= 8 ? std::cout << "|  0" : std::cout << "|  ";
        std::cout << iter[i] << "  | " << h[i] << " | " 
        <<apprVal[i] <<" | " << error[i] << " |" << std::endl;
    }
    std::cout << std::endl;
}