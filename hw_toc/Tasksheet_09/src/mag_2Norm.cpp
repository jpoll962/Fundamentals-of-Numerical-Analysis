#include <iostream>
#include <cmath>

int main()
{
    double vect[3] = {1, 2, 3};
    double mag;

    mag = sqrt( vect[0] * vect[0] + vect[1] * vect[1] + vect[2] * vect[2] );

    std::cout << "The magnitude of the vector (L2 Norm Version) is: " << mag << std::endl;

    return 0;
}