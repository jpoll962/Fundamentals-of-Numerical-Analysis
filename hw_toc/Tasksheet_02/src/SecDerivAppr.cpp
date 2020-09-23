//////////////////////////////////////////////////
// Name: Approximation of the Second Derivative
// Author: Joe Pollock
// Description: Approximate the Second Derivative
//  using discrete values for h.
//////////////////////////////////////////////////
#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
    //Assign Values
    int iter [18] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    long double error [18];
    long double x = 2.0L;
    long double h [18] = {1, 0.5, pow(10,-1), pow(10,-2), pow(10,-3), pow(10,-4), pow(10,-5), pow(10,-6), pow(10,-7), pow(10,-8), pow(10,-9),
        pow(10,-10), pow(10,-11), pow(10,-12), pow(10,-13), pow(10,-14), pow(10,-15), pow(10,-16)};
    long double apprVal [18];
    long double exactVal = -cos(x);

    // Setting range of decimals to show
    std::cout.precision(16);

    // Printing Exact Value
    std::cout << "The Exact Value = " << exactVal << std::endl << std::endl;

    for(int i = 0; i < 18; i++)
    {
        apprVal[i] = ( cos((x) + (h[i])) - 2.0 * cos(x) + cos((x) - (h[i])) ) / ( pow(h[i],2) );
        error[i] = std::abs(exactVal - apprVal[i]);
    }
    std::cout << std::endl;

    std::cout << "| iteration |     h     |" << std::endl;
    for(int i = 0; i < 18; i++)
    {
        i <= 8 ? std::cout << "|    0" : std::cout << "|    ";
        std::cout << iter[i] << "     | " << h[i] << "       |" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "| iteration |   approximation   |" << std::endl;
    for(int i = 0; i < 18; i++)
    {
        i <= 8 ? std::cout << "|    0" : std::cout << "|    ";
        std::cout << iter[i] << "     | " << apprVal[i] << " |" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "| iteration |         error         |" << std::endl;
    for(int i = 0; i < 18; i++)
    {
        i <= 8 ? std::cout << "|    0" : std::cout << "|    ";
        std::cout <<  iter[i] << "     | " << error[i] << " |" << std::endl;
    }
}
