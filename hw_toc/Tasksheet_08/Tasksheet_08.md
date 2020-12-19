# Solutions for Tasksheet 8

## Task 1:

The code below implements Gaussian Elimination and Backsubstitution on a square linear systems of equations that is entered by the user. Instructions are in the code, but for visual purposes, they are:

```
Below you will be asked to enter the elements of the augmented matrix.
When you do, put a space between the values in each cell.
Then hit enter once you are ready to enter the values for the next row.
When you hit enter, proceed as you did previously.
```

The code is:
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

First the code uses Guassian Elimination, then backsubstition to solve the given systems of equations.

## Task 2:


## Task 3:


## Task 4:


## Task 5:


## Task 6:

The Hilbert Matrix is a popular Matrix throughout Mathematics. One of the articles I read cited, specifically, its use in studying digital computing during its early days. The Hilbert Matrix has a condition number that grows rapidly as the square matrix grows in number of columns/rows. Below is the growth rate for the asymptotic growth rate for the 2-norm:  
![Growth rate](https://s0.wp.com/latex.php?latex=%5Ckappa_2%28H_n%29+%5Csim+%5Cmathrm%7Be%7D%5E%7B3.5n%7D&bg=ffffff&fg=333333&s=0&c=20201002&zoom=2)  
https://www.tandfonline.com/doi/abs/10.1080/00029890.1983.11971218  
https://nhigham.com/2020/06/30/what-is-the-hilbert-matrix/
