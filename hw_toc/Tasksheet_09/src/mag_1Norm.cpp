#include "all.hpp"

double L1mag()
{
    double vect[3] = {1,-2,3};

    return ( fabs(vect[0]) + fabs(vect[1]) + fabs(vect[2]) );
}

void L1print(double magnitude)
{
    std::cout << "The magnitude of the vector (L1 Norm Version) is: " << magnitude << std::endl;
}