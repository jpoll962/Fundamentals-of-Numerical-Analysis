**Routine Name:** vecAdd

**Author:** Joe Pollock

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).

For example:  
```
g++ vecAdd.cpp
```

will produce an executable `a.exe` or `a.out` that can be executed with the command `./a.exe` or `./a.out`. If you want a different name, the following will name the executable vecAddition:
```
g++ vecAdd.cpp  -o vecAddition
```

**Description/Purpose:** This routine will add two vectors together as defined in the code.

**Input:** There are no inputs for this program, but the vectors can be set inside the code.

**Output:** This routine returns the addition of two vectors.

**Usage/Example:** The routine is used to compute the addition of two vectors.

Output from the commands above results in the final values:
```
The New Vector is <55, 736, 832>.
```

Vect is a class used to overload the addition operator to allow for vector addition. The print function is to tell the compiler how to print the newly calculated vector.

Implementation/Code: The following is the code for vecAdd():
Code of vecAdd.cpp:
```C++
#include <iostream>

class Vect
{
    private:
        double one, two, three;
    public:
        Vect(double o = 0, double  tw = 0, double th = 0)
        {
            one = o;
            two = tw;
            three = th;
        }

        Vect operator + (Vect const &obj)
        {
            Vect res;

            res.one = one + obj.one;
            res.two = two + obj.two;
            res.three = three + obj.three;

            return res;
        }

        void print()
        {
            std::cout << "The New Vector is ";
            std::cout << "<" << one << ", " << two << ", " << three << ">" << std::endl;
        }
};

int main()
{
    double a = 11, b = 236, c = 213, d = 44, e = 500, f = 619;

    Vect v1(a, b, c), v2(d, e, f);
    Vect v3 = v1 + v2;
    v3.print();

    return 0;
}
```

Last Modified: December/2020
[Back to Software Manual](https://github.com/jpoll962/math4610/blob/master/hw_toc/SoftwareManual/SoftwareManual_toc.md)