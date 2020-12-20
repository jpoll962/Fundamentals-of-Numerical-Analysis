#include <iostream>

class Vect
{
    private:
        double one, two, three, sum;
    public:
        Vect(double o = 0, double  tw = 0, double th = 0, double s = 0)
        {
            one = o;
            two = tw;
            three = th;
            sum = s;
        }

        Vect operator * (Vect const &obj)
        {
            Vect res;

            res.one = one * obj.one;
            res.two = two * obj.two;
            res.three = three * obj.three;

            return res;
        }

        void print()
        {
            std::cout << "The dot product is: " << one + two + three << std::endl;
        }
};

int main()
{
    double a = 2, b = 5, c = 9;
    double d = 3, e = 0, f = 6;

    Vect v1(a, b, c), v2(d, e, f);
    Vect v3 = v1 * v2;
    v3.print();

    return 0;
}