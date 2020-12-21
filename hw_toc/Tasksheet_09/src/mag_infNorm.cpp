#include "all.hpp"

double LinfMag()
{
    double vect[3] = {1, 5, 10};
    double mag, temp;

    temp = vect[0];
    for(int i = 0; i < 2; i++)
    {
        if (temp > vect[i+1])
        {
            mag = temp;
        }
        else
        {
            temp = vect[i+1];
            mag = temp;
        }
    }

    return mag;
}

void LinfPrint(double magnitude)
{
    std::cout << "The magnitude of the vector (L^inf Norm Version) is: " << magnitude << std::endl;
}