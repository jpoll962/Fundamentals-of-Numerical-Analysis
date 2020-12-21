#include "all.hpp"

double dotProduct()
{
    double dotProd;
    double a = 2, b = 5, c = 9;
    double d = 3, e = 0, f = 6;

    a = a * d;
    b = b * e;
    c = c * f;

    dotProd = a + b + c;

    return dotProd;
}

void dotProductPrint(double dotProd)
{
    std::cout << "The product is: " << dotProd << std::endl;
}