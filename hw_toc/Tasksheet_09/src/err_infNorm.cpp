#include "all.hpp"

double LinfErr()
{
    double vec1[3] = {2, 5, 3};
    double vec2[3] = {1, -2, 7};
    
    double val = fabs(vec1[0] - vec2[0]);
    int n = 3;

    for (int i = 1; i < n; i++)
    {
        double tempval = fabs(vec1[i] - vec2[i]);
        if(tempval > val)
        {
            val = tempval;
        }
    }

    return val;
}

void LinfErrPrint(double err)
{
    std::cout << "The error between the two vectors is (L^inf Norm): " << err << std::endl;
}