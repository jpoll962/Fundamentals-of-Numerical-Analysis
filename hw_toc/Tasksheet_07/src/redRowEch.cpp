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