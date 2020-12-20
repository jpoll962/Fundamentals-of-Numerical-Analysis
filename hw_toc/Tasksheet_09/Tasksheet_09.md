# Solutions for Tasksheet 9

## Task 1:

### Vector Addition

Below is code to add two vectors together. The values and size of the vectors can be changed within the code.

vecAdd.cpp:  
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
    double a = 1, b = 6, c = 2;
    double d = 4, e = 5, f = 9;

    Vect v1(a, b, c), v2(d, e, f);
    Vect v3 = v1 + v2;
    v3.print();

    return 0;
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

        Vect operator - (Vect const &obj)
        {
            Vect res;

            res.one = one - obj.one;
            res.two = two - obj.two;
            res.three = three - obj.three;

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
    double a = 2, b = 4, c = 9;
    double d = 3, e = 5, f =0;

    Vect v1(a, b, c), v2(d, e, f);
    Vect v3 = v1 - v2;
    v3.print();

    return 0;
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
#include <iostream>

class Vect
{
    private:
        double one, two, three, scalar;
    public:
        Vect(double o = 0, double  tw = 0, double th = 0, double s = 0)
        {
            one = o;
            two = tw;
            three = th;
            scalar = s;
        }

        void print()
        {
            std::cout << "The New Vector is ";
            std::cout << "<" << scalar * one << ", " << scalar * two << ", " << scalar * three << ">" << std::endl;
        }
};

int main()
{
    double a = 1, b = 6, c = 2;
    double s = 5;

    Vect v1(a, b, c, s);

    v1.print();

    return 0;
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
#include <iostream>

class Vect
{
    private:
        double one, two, three, sum;
    public:
        Vect(double o = 0, double  tw = 0, double th = 0, double s = 0)
        {
            one = o;
            two = tw;
            three = th;
            sum = s;
        }

        Vect operator * (Vect const &obj)
        {
            Vect res;

            res.one = one * obj.one;
            res.two = two * obj.two;
            res.three = three * obj.three;

            return res;
        }

        void print()
        {
            std::cout << "The dot product is: " << one + two + three << std::endl;
        }
};

int main()
{
    double a = 2, b = 5, c = 9;
    double d = 3, e = 0, f = 6;

    Vect v1(a, b, c), v2(d, e, f);
    Vect v3 = v1 * v2;
    v3.print();

    return 0;
}
```
  
The output is:  
```
The dot product is: 60
```

### Outer Product for Two Vectors of the Same Length

For the most part, I scrapped the earlier code because I found a more simplistic way when computing the outer product as shown below.  
outProduct.cpp:
```C++
#include <iostream>

int main()
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

    std::cout << "The Resulting Matrix is: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "| " << matrix[i][0] << " " << matrix[i][1] << " " << matrix[i][2] << " |" << std::endl;   // Print Matrix to screen
    }

    return 0;
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

### Magnitude of a Vector - 1 Norm Version

### Magnitude of a Vector - 2 Norm Version

### Magnitude of a Vector - Infinite Norm Version

### Error between Vectors - 1 Norm Version

### Error between Vectors - 2 Norm Version

### Error between Vectors - Infinite Norm Version


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
