# Solutions for Tasksheet 9

For Task 1 and 2, I created a singular header file and a singular test file.  
The singular header file is:  
all.hpp:  
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

The singular test file is:  
test.cpp:  
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

In order to test the code, you change the 0 next to the #if to 1 for the function you want to test. Then you compile with the following (replace ## with the name of the cpp file you are wanting to test):  
```
g++ test.cpp ##.cpp
```


## Task 1:

### Vector Addition

Below is code to add two vectors together. The values and size of the vectors can be changed within the code.

vecAdd.cpp:  
```C++
#include "all.hpp"

Vect vecAdd()
{
    double a = 1, b = 6, c = 2; // [1  6  2]
    double d = 4, e = 5, f = 9; // [4  5  9]

    Vect v1(a, b, c), v2(d, e, f);
    Vect v3 = v1 + v2;

    return v3;
}
```
  
The output is:  
```
The New Vector is <5, 11, 11>
```

### Vector Subtraction

With some slight alterations to the above code, I created a routine to compute the difference between two vectors. The values and size of the vectors can be changed within the code.  

VecSub.cpp:  
```C++
#include "all.hpp"

Vect vecSub()
{
    double a = 2, b = 4, c = 9; // [2  4  9]
    double d = 3, e = 5, f =0; // [3  5  0]

    Vect v1(a, b, c), v2(d, e, f);
    Vect v3 = v1 - v2;

    return v3;
}
```
  
The output is:  
```
The New Vector is <-1, -1, 9>
```

### Scalar Multiplication for Vectors

With some slight alterations to the above code, I created a routine to compute the product of a scalar with a vector. The values and size of the vector can be changed within the code. The scalar is passed into the vector alongside the vector values.  

vecScalMult.cpp:  
```C++
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
```
  
The output is:  
```
The New Vector is <5, 30, 10>
```

### Dot Product for Two Vectros of the Same Length

With some slight alterations to the above code, I created a routine to compute the dot product of two vectors. The values and size of the vectors can be changed within the code.

dotProduct.cpp:
```C++
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
```
  
The output is:  
```
The product is: 60
```

### Outer Product for Two Vectors of the Same Length

For the most part, I scrapped the earlier code because I found a more simplistic way when computing the outer product as shown below. If you do not want to print the function, you can change the 1 next to #if to a 0.  
outProduct.cpp:
```C++
#include "all.hpp"

void outProduct()
{
    double matrix[3][3];
    double vec1[3] = {1,2,3}; // Vertical Matrix
    double vec2[3] = {3,1,2}; // Horizontal Matrix

    for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix[i][j] = vec1[i] * vec2[j]; // Compute values to assign into the matrix
            }
        }

#if 1
    std::cout << "The Resulting Matrix is: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "| " << matrix[i][0] << " " << matrix[i][1] << " " << matrix[i][2] << " |" << std::endl;   // Print Matrix to screen
    }
#endif

}
```

The output is:  
```
The Resulting Matrix is:
| 3 1 2 |
| 6 2 4 |
| 9 3 6 |
```

## Task 2:

### Magnitude of a Vector - L 1 Norm Version

This version required taking each vector value's absolute value, then adding them all together. This is shown in the code below.  
mag_1Norm.cpp:  
```C++
#include "all.hpp"

double L1mag()
{
    double vect[3] = {1,-2,3};

    return ( fabs(vect[0]) + fabs(vect[1]) + fabs(vect[2]) );
}

void L1print(double magnitude)
{
    std::cout << "The magnitude of the vector (L1 Norm Version) is: " << magnitude << std::endl;
}
```

The output is:  
```
The magnitude of the vector (L1 Norm Version) is: 6
```

### Magnitude of a Vector - L 2 Norm Version

This version required placing every vector value to the power of 2, then taking the square root of the result of their sum. This is shown  in the code below.  
mag_2Norm.cpp:  
```C++
#include "all.hpp"

double L2mag()
{
    double vect[3] = {1,-2,3};

    return ( sqrt( vect[0] * vect[0] + vect[1] * vect[1] + vect[2] * vect[2] ) );
}

void L2print(double magnitude)
{
    std::cout << "The magnitude of the vector (L2 Norm Version) is: " << magnitude << std::endl;
}
```

The output is:  
```
The magnitude of the vector (L2 Norm Version) is: 3.74166
```

### Magnitude of a Vector - L Infinite Norm Version

This version calculated the magnitude of the vector by identifying the largest absolute value in the vector to assign as the magnitude. This is shown in the code below:  
mag_infNorm.cpp:  
```C++
#include "all.hpp"

double LinfMag()
{
    double vect[3] = {1, 5, 10};
    double mag, temp;

    temp = vect[0];
    for(int i = 0; i < 2; i++)
    {
        if (temp > vect[i+1])
        {
            mag = temp;
        }
        else
        {
            temp = vect[i+1];
            mag = temp;
        }
    }

    return mag;
}

void LinfPrint(double magnitude)
{
    std::cout << "The magnitude of the vector (L^inf Norm Version) is: " << magnitude << std::endl;
}
```  

The output is:  
```
The magnitude of the vector (L^inf Norm Version) is: 10
```

### Error between Vectors - L 1 Norm Version

```C++
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
```  

The output is:  
```
The error between the two vectors is (L^1 Norm): 12
```

### Error between Vectors - L 2 Norm Version

```C++
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
```  

The output is:  
```
The error between the two vectors is (L^2 Norm): 8.12404
```

### Error between Vectors - L Infinite Norm Version

```C++
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
```  

The output is:  
```
The error between the two vectors is (L^inf Norm): 7
```

## Task 3:

### Matrix Addition

### Matrix Subtraction

### Scalar Multiplication for a Matrix

### Transpose of a Matrix

### Product of a Rectangular Matrix and Vector

### Product of Two Rectangular Matrices

## Task 4:


## Task 5:


## Task 6:

Both the Jacobi Method and the Gauss-Seidel Iteration Method are used for solving linear equation system Ax=b. The Jacobi Method come with two assumptions being made. Those two assumptions are: 1. the system given has a unique solution, and 2. All coefficients along the main diagonal of matrix A are nonzero. There is one main difference between the two methods. With the Jacobi Method, unknowns are updated parallel to the previous value. With the Gauss-Seidel Iteration Method, unknowns are updated differently for Lx and Ux. This allows the Gauss-Seidel Iteration Method to use the most updated value as soon as the value is known.

https://www3.nd.edu/~zxu2/acms40390F12/Lec-7.3.pdf
fourier.eng.hmc.edu/e176/lectures/ch0/node10.html
