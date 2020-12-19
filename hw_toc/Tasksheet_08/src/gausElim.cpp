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