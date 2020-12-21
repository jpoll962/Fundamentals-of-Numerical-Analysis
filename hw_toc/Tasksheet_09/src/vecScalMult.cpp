#include "all.hpp"

Vect vecScalMult()
{
    double a = 1, b = 6, c = 2; // Vector Values
    double s = 5; // Scalar

    a = a * s;
    b = b * s;
    c = c * s;

    Vect v(a, b, c, s);

    return v;
}