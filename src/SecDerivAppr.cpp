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
    long double deriVal [18];

    std::cout << std::setprecision(17);

    std::cout << "| iter     |          h             |      approximation      |     error     |      difference    |" << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    deriVal[0] = ( cos(x + h) - 2.0 * cos(x) + cos(x - h) ) / ( pow(h,2) );
    std::cout << "1              " << h << "            " << deriVal[0] << "               "
        << -cos(2.0L) - deriVal[0] << std::endl;

    h = 0.5L;
    deriVal[1] = ( cos(x + h) - 2.0 * cos(x) + cos(x - h) ) / ( pow(h,2) );
    std::cout << "2              " << h << "              " << deriVal[1] << "             "
        << -cos(2.0L) - deriVal[1] << std::endl;

    // For Loop to iterate through values
    for(h = 0.1L; h > 0.00000000000000001; h = h / 10.0L)
    {
        deriVal[i] = ( cos(x + h) - 2.0 * cos(x) + cos(x - h) ) / ( pow(h,2) );
    std::cout << i <<"              " << h << "            " << deriVal[i] << "             "
        << -cos(2.0L) - deriVal[i] << std::endl;
        i++;
    }
}