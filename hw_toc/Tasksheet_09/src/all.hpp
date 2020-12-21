#include <iostream>
#include <vector>
#include <cmath>

class Vect
{
    private:
        double one, two, three, scalar, value;

    public:
        Vect(double o = 0, double  tw = 0, double th = 0, double s = 0)
        {
            one    = o;
            two    = tw;
            three  = th;
            scalar = s;
        }

        Vect operator + (const Vect &obj)
        {
            Vect res;

            res.one   = one + obj.one;
            res.two   = two + obj.two;
            res.three = three + obj.three;

            return res;
        }

        Vect operator - (const Vect &obj)
        {
            Vect res;

            res.one   = one - obj.one;
            res.two   = two - obj.two;
            res.three = three - obj.three;

            return res;
        }

        Vect operator * (const Vect &obj)
        {
            Vect res;

            res.one   = one * obj.one;
            res.two   = two * obj.two;
            res.three = three * obj.three;

            return res;
        }

        void vecGenPrint()
        {
            std::cout << "The New Vector is ";
            std::cout << "<" << one << ", " << two << ", " << three << ">" << std::endl;
        }
};

Vect vecAdd();
Vect vecSub();
Vect vecScalMult();

double dotProduct();
void dotProductPrint(double dotProd);
void outProduct();

//Task 2
////////////////////////////////////////////////
double L1mag();
void L1print(double magnitude);

double L2mag();
void L2print(double magnitude);

double LinfMag();
void LinfPrint(double magnitude);

double L1err();
void L1errPrint(double err);

double L2err();
void L2errPrint(double err);

double LinfErr();
void LinfErrPrint(double err);