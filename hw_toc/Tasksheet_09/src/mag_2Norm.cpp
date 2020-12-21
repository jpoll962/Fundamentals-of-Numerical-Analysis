#include "all.hpp"

double L2mag()
{
    double vect[3] = {1,-2,3};

    return ( sqrt( vect[0] * vect[0] + vect[1] * vect[1] + vect[2] * vect[2] ) );
}

void L2print(double magnitude)
{
    std::cout << "The magnitude of the vector (L2 Norm Version) is: " << magnitude << std::endl;
}