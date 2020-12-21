#include <iostream>
using namespace std;
#define N 4

// This function will multiplies A1[][] and B2[][], and it will stores the result in this res[][] void multiply(int A1[][N],
int B2[][N],
int res[][N])
{
    int a, z, k;
    for (a = 0; a < N; a++)
    {
        for (z = 0; z < N; z++)
        {
            res[a][z] = 0;
            for (k = 0; k < N; k++)
            res[a][z] += A1[a][k] *
            B2[k][z];
        }
    }

}
    // Driver Code
int main()
{
    int a, z;
    int res[N][N]; // this is use to store result
    int A1[N][N] = {{5, 5, 5, 5},
                    {6, 6, 6, 6},
                    {7, 7, 7, 7},
                    {8, 8, 8, 8}};
    
    int B2[N][N] = {{5, 5, 5, 5},
                    {6, 6, 6, 6},
                    {7, 7, 7, 7},
                    {8, 8, 8, 8}};
                    
        multiply(A1, B2, res);
        cout << "Resulted matrix are as follow \n";
        for (a = 0; a < N; a++)
        {
            for (z = 0; z < N; z++)
                cout << res[a][z] << " ";
                cout << "\n";
        }
    return 0;
}