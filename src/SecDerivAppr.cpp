//////////////////////////////////////////////////
// Name: Approximation of the Second Derivative
// Author: Joe Pollock
// Description: Approximate the Second Derivative
//  using discrete values for h.
//////////////////////////////////////////////////
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    //Assign Values
    long double x = 2.0L;
    long double h = 1.0L;
    int i = 2;
    long double deriVal [18L];

    std::cout << std::setprecision(17);

    deriVal[0] = ( cos(x + h) - 2.0 * cos(x) + cos(x - h) ) / ( pow(h,2) );
    std::cout << "DeriVal 1: " << deriVal[0] << std::endl;
    h = 0.5L;
    deriVal[1] = ( cos(x + h) - 2.0 * cos(x) + cos(x - h) ) / ( pow(h,2) );
    std::cout << "DeriVal 2: " << deriVal[1] << std::endl;

    // For Loop to iterate through values
    for(h = 0.1L; h > 0.00000000000000001; h = h / 10.0L)
    {
        deriVal[i] = ( cos(x + h) - 2.0 * cos(x) + cos(x - h) ) / ( pow(h,2) );
        std::cout << "DeriVal " << i + 1 << ": "<< deriVal[0] << std::endl;
        i++;
    }
}