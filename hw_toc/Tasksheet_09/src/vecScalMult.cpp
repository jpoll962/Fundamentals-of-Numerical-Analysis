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