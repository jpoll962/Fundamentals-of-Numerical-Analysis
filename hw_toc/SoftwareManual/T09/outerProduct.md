**Routine Name:** outerProduct  

**Author:** Joe Pollock  

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  

For example:  
```
g++ [Insert .cpp file(s) being compiled]
```

will produce an executable `a.exe` or `a.out` that can be executed with the command `./a.exe` or `./a.out`. If you want a different name, the following will name the
generated executable [Insert Title for generated executable]:  
```
g++ [Insert .cpp file(s) being compiled] -o [Insert Title for generated executable executable]
```

**Description/Purpose:** [Descrbe the code and the purpose of the code]  

**Input:** [Describe inputs into the code and what they represent]  

**Output:** [Describe what the outputs are and what they represent]  

**Usage/Example:**  

[Describe the example you are providing]  

Output from the commands above:  
```
[Insert Output of code]
```

[Insert description of the output's variables and values]  

**Implementation/Code:** The following is the code for [Title of Routine]:  
```C++
[Insert source code Here]
```

The following is the code for all.hpp:  
```C++
#include <iostream>
#include <vector>
#include <cmath>

class Vect
{
    private:
        double one, two, three, scalar, value;

    public:
        Vect(double o = 0, double  tw = 0, double th = 0, double s = 0)
        {
            one    = o;
            two    = tw;
            three  = th;
            scalar = s;
        }

        Vect operator + (const Vect &obj)
        {
            Vect res;

            res.one   = one + obj.one;
            res.two   = two + obj.two;
            res.three = three + obj.three;

            return res;
        }

        Vect operator - (const Vect &obj)
        {
            Vect res;

            res.one   = one - obj.one;
            res.two   = two - obj.two;
            res.three = three - obj.three;

            return res;
        }

        Vect operator * (const Vect &obj)
        {
            Vect res;

            res.one   = one * obj.one;
            res.two   = two * obj.two;
            res.three = three * obj.three;

            return res;
        }

        void vecGenPrint()
        {
            std::cout << "The New Vector is ";
            std::cout << "<" << one << ", " << two << ", " << three << ">" << std::endl;
        }
};

Vect vecAdd();
Vect vecSub();
Vect vecScalMult();

double dotProduct();
void dotProductPrint(double dotProd);
void outProduct();

//Task 2
////////////////////////////////////////////////
double L1mag();
void L1print(double magnitude);

double L2mag();
void L2print(double magnitude);

double LinfMag();
void LinfPrint(double magnitude);

double L1err();
void L1errPrint(double err);

double L2err();
void L2errPrint(double err);

double LinfErr();
void LinfErrPrint(double err);
```

The following is the code for test.cpp:  
```C++
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
#if 0
    double err = LinfErr();
    LinfErrPrint(err);
#endif

    return 0;
}
```

**Last Modified:** December/2020
[Back to Software Manual](https://github.com/jpoll962/math4610/blob/master/hw_toc/SoftwareManual/SoftwareManual_toc.md)
