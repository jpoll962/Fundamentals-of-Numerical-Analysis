**Routine Name:** redRowEch (Reduced Row Echelon Form)  

**Author:** Joe Pollock  

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  

For example:  
```
g++ redRowEch.cpp
```

will produce an executable `a.exe` or `a.out` that can be executed with the command `./a.exe` or `./a.out`. If you want a different name, the following will name the
generated executable redRow:  
```
g++ redRowEch.cpp -o redRow
```

**Description/Purpose:** The purpose of this code is to transform a matrix into Reduced Row Echelon Form.   

**Input:** No input on the CLI is necessary, but the matrix can be changed inside the code.  

**Output:** The output is the original matrix being stepped through the process of Reduced Row Echelon Form.  

**Usage/Example:**  

I am provided the following matrix to be transfered to its Reduced Row Echelon Version:  
```
----------------------------------
|      5      -6      -7       7 |
|      3      -2       5     -17 |
|      2       4      -3      29 |
----------------------------------
```

Output from the commands above:  
```
----------------------------------
|      5      -6      -7       7 |
|      3      -2       5     -17 |
|      2       4      -3      29 |
----------------------------------
----------------------------------
|      1    -1.2    -1.4     1.4 |
|      0     1.6     9.2   -21.2 |
|      0     6.4    -0.2    26.2 |
----------------------------------
----------------------------------
|      1       0     5.5   -14.5 |
|      0       1    5.75  -13.25 |
|      0       0     -37     111 |
----------------------------------
----------------------------------
|      1       0       0       2 |
|      0       1       0       4 |
|      0       0       1      -3 |
----------------------------------
```

The output of the code is the provided matrix being stepped through the Reduced Row Echelon Form process. The final matrix is the provided matrix in Reduced Row Echelon Form.  

**Implementation/Code:** The following is the code for redRowEch:  
```C++
#include <iostream>
#include <cstdlib>
#include <iomanip>

void printmatrix(double A[][4]);
void RowReduce(double A[][4]);

int main()
{
    double A[3][4] = {{5, -6, -7,   7}, // Augmented Matrix
                     {3, -2,  5, -17},
                     {2,  4, -3,  29}};

    printmatrix(A);
    RowReduce(A);
}

void printmatrix(double A[][4]) // Outputs matrix
{
    int p=3; // number of rows
    int q=4; // number of columns

    std::cout << "----------------------------------" <<std::endl;
    for (int i=0; i<p; i++) {
            for (int j=0; j<q; j++) {
                    if (j == 0)
                        {
                            std::cout << "|";
                        }
                    std::cout << std::setw(7) << A[i][j] << " ";
                    if (j == 3)
                    {
                        std::cout << "|";
                    }
            }
            std::cout << std::endl;
    }

    std::cout << "----------------------------------" <<std::endl;
}

void RowReduce(double A[][4])
{
    const int nrows = 3; // number of rows
    const int ncols = 4; // number of columns

    int lead = 0; 

    while (lead < nrows) {
        double d, m;

        for (int r = 0; r < nrows; r++) { // for each row ...
            /* calculate divisor and multiplier */
            d = A[lead][lead];
            m = A[r][lead] / A[lead][lead];

            for (int c = 0; c < ncols; c++) { // for each column ...
                if (r == lead)
                    A[r][c] /= d;               // make pivot = 1
                else
                    A[r][c] -= A[lead][c] * m;  // make other = 0
            }
        }

        lead++;
        printmatrix(A);
    }
}
```

**Last Modified:** December/2020
[Back to Software Manual](https://github.com/jpoll962/math4610/blob/master/hw_toc/SoftwareManual/SoftwareManual_toc.md)
