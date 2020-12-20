#include <iostream>


///////////////////////
// Working on definition of what Outer Product means
//
//
//
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
};

int main()
{
    double matrix[3][3];
    double vec1[3] = {1,6,2};
    double vec2[3] = {4,5,9};

    for (int i = 0; i < 3; i++)
        {
            matrix[i][0] = vec1[i];
        }

    for (int i = 0; i < 3; i++)
        {
            matrix[0][i] = vec2[i];
        }

    std::cout << "The Resulting Matrix is ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrix[i][j] << std::endl;
        }
    }

    return 0;
}