#include <iostream>

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

        Vect operator + (Vect const &obj)
        {
            Vect res;

            res.one = one + obj.one;
            res.two = two + obj.two;
            res.three = three + obj.three;

            return res;
        }

        void print()
        {
            std::cout << "The New Vector is ";
            std::cout << "<" << one << ", " << two << ", " << three << ">" << std::endl;
        }
};

int main()
{
    double a = 11, b = 236, c = 213, d = 44, e = 500, f = 619;

    Vect v1(a, b, c), v2(d, e, f);
    Vect v3 = v1 + v2;
    v3.print();

    return 0;
}