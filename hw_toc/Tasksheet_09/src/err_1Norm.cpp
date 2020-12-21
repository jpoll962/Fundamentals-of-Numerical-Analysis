#include "all.hpp"

double L1err()
{
    double sum = 0.0;
    int n = 3;

    double vec1[3] = {2, 5, 3};
    double vec2[3] = {1, -2, 7};

    for (int i = 0; i < n; i++)
    {
        sum = sum + fabs(vec1[i] - vec2[i]);
    }
    
    return sum;
}

void L1errPrint(double err)
{
    std::cout << "The error between the two vectors is (L^1 Norm): " << err << std::endl;
}