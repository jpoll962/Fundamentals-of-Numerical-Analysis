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