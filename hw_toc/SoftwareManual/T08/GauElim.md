**Routine Name:** GausElim (Guassian Elimination)  

**Author:** Joe Pollock  

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  

For example:  
```
g++ gausElim.cpp
```

will produce an executable `a.exe` or `a.out` that can be executed with the command `./a.exe` or `./a.out`. If you want a different name, the following will name the
generated executable gaus:  
```
g++ gausElim.cpp -o gaus
```

**Description/Purpose:** The purpose of this code is to use a given matrix and step it through the process of Gaussian Elimination.  

**Input:** This routine requires you to enter the elements of the given matrix. The size of the matrix is determined by the number of equations you want to solve for. For input, you will be inputting the augmented form of the matrix, starting with row 1. After each value, place a space between that value and the following value. After row 1, you will hit enter, and repeat for the following rows. The code will stop allowing inputs once you have entered the max size of the matrix determined by the number of equations you wish to solve for.  

**Output:** The output is the values for the previously unknown variables that you were solving for.  

**Usage/Example:**  

In the example I have provided, I solved for 2 unknowns, with the following augmented matrix:  
```
| 1 2 3 |
| 4 5 6 |
```

Output from the commands above:  
```
Unkown Values= -1, 2,
```

The provided augmented matrix represented:  
```
x  + 2y = 3
4x + 5y = 6
```
The output informs us that placing x = -1 and y = 2, both of the given equations will hold true.

**Implementation/Code:** The following is the code for gausElim.cpp:  
```C++
#include <iostream>
#include <cmath>

int main()
{
    int i, j, k, n;
    
    std::cout << "Enter the number of equations: ";
    std::cin >> n;
    std::cout << std::endl;
    
    // n = rows; n+1 = columns for Augmented Matrix
    double mat[n][n+1];
    
    // number of unknowns
    double unk[n];

    std::cout << "Below you will be asked to enter the elements of the augmented matrix." << std::endl;
    std::cout << "When you do, put a space between the values in each cell. Then hit " << std::endl;
    std::cout << "enter once you are ready to enter the values for the next row. When" << std::endl;
    std::cout << "you hit enter, proceed as you did previously." << std::endl;
    std::cout << "Enter the elements of the augmented matrix: ";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n+1; j++)
        {
            std::cin >> mat[i][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(fabs(mat[i][i]) < fabs(mat[j][i]))
            {
                for(k = 0; k < n+1; k++)
                {
                    // Swap mat[i][k] and mat[j][k]
                    std::swap(mat[i][k], mat[j][k]);
                }
            }
        }
    }

    // Gaussian Elimination
    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            double f = mat[j][i] / mat[i][i];
            for(k = 0; k < n+1; k++)
            {
              mat[j][k] = mat[j][k] - f * mat[i][k];
            }
        }
    }

    // Backsubstitution
    for(i = n-1; i >= 0; i--)
    {
        unk[i] = mat[i][n];
                    
        for(j = i+1; j < n; j++)
            {
                if(i != j)
                {
                    unk[i] = unk[i] - mat[i][j] * unk[j];
                }
        }
        unk[i] = unk[i] / mat[i][i];
    }

    std::cout << "Unkown Values= ";

    for(i = 0; i < n; i++)
        {
            std::cout << unk[i] << ", ";
        }

    std::cout << std::endl;

    return 0;
}
```

**Last Modified:** December/2020
[Back to Software Manual](https://github.com/jpoll962/math4610/blob/master/hw_toc/SoftwareManual/SoftwareManual_toc.md)
