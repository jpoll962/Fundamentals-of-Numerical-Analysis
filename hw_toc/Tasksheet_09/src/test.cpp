#include "all.hpp"

int main()
{
    //Task 1
///////////////////////////////////////////////////////////

    // Vector Addition
#if 0
    Vect v = vecAdd();
    v.vecGenPrint();
#endif

    // Vector Subtraction
#if 0
    Vect v = vecSub();
    v.vecGenPrint();
#endif
    
    // Scalar Multiplication on a Vector
#if 0
    Vect v = vecScalMult();
    v.vecGenPrint();
#endif

    // Dot Product for Two Vectors of the Same Length
#if 0
    double dotValue = dotProduct();
    dotProductPrint(dotValue);
#endif

    // Outer Product for Two Vectors of the Same Length
#if 0
    outProduct();
#endif

    //Task 2
////////////////////////////////////////////////////////////////////

    // Magnitude of a vector - L^1 Norm Version
#if 0
    double mag = L1mag();
    L1print(mag);
#endif

    // Magnitude of a vector - L^2 Norm Version
#if 0
    double mag = L2mag();
    L2print(mag);
#endif

    // Magnitude of a vector - L^inf Norm Version
#if 0
    double mag = LinfMag();
    LinfPrint(mag);
#endif

    // Error between vectors - L^1 Norm Version
#if 0
    double err = L1err();
    L1errPrint(err);
#endif

    // Error between vectors - L^2 Norm Version
#if 0
    double err = L2err();
    L2errPrint(err);
#endif

    // Error between vectors - L^inf Norm Version
#if 1
    double err = LinfErr();
    LinfErrPrint(err);
#endif

    return 0;
}