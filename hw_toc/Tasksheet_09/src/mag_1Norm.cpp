#include <iostream>
#include <cmath>

int main()
{
    double vect[3] = {1, 2, 3};
    double mag;

    mag = fabs(vect[0]) + fabs(vect[1]) + fabs(vect[2]);

    std::cout << "The magnitude of the vector (L1 Norm Version) is:" << mag << std::endl;

    return 0;
}