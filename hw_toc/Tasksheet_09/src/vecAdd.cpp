#include "all.hpp"

Vect vecAdd()
{
    double a = 1, b = 6, c = 2; // [1  6  2]
    double d = 4, e = 5, f = 9; // [4  5  9]

    Vect v1(a, b, c), v2(d, e, f);
    Vect v3 = v1 + v2;

    return v3;
}