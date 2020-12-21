#include "all.hpp"

Vect vecSub()
{
    double a = 2, b = 4, c = 9; // [2  4  9]
    double d = 3, e = 5, f =0; // [3  5  0]

    Vect v1(a, b, c), v2(d, e, f);
    Vect v3 = v1 - v2;

    return v3;
}