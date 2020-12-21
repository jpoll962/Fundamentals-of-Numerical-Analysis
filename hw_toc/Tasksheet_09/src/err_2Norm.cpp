#include "all.hpp"

double L2err()
{
    double sum = 0.0;
    int n = 3;

    double vec1[3] = {2, 5, 3};
    double vec2[3] = {1, -2, 7};

    for (int i = 0; i < n; i++)
    {
        double diff = vec1[i] - vec2[i];

        sum = sum + diff * diff;
    }

    return sqrt(sum);
}

void L2errPrint(double err)
{
    std::cout << "The error between the two vectors is (L^2 Norm): " << err << std::endl;
}