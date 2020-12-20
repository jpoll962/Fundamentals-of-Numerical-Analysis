#include <iostream>
#include <cmath>

int main()
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

    std::cout << "The magnitude of the vector (L^inf Norm Version) is: " << mag << std::endl;

    return 0;
}