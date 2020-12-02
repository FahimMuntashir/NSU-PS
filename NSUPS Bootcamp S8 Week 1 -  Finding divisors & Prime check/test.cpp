#include <iostream>
using namespace std;
class Rational
{
 // numerator and denominator
 int n, d;

 public:
 //Add necessary constructor(s) to initialize n and d
 //Add your set and get functions for n and d
 void input();

    // ToDo: Member function to write a rational as n/d
    void output();

    // ToDo: declare an accessor function to get the numerator
    int getNumerator();

    // ToDo: declare an accessor function to get the denominator
    int getDenominator();
};
class RationalOP
{
 Rational r;
 public:
 // Add necessary constructor(s) to initialize r
 // Add void multiply(Rational s)
 // Add void show()
 
};
int main()
{
 Rational r1;
 Rational r2(3,7);
/*Write necessary code to set the numerator and denominator of r1 as 2
and 5, respectively. */
 cout<<r1.getn()<<"/"<< r1.getd() <<endl;

 RationalOP o(3, 8);
 o.showResult(); //it will print 3/8
 o.multiply(r2);

/* The purpose of multiply function is to multiply r (private property
of Object o) with parameter r2, and store the result to r. For
example, now the numerator of r will be 3x3=9 and the denominator of r
will be 8x7=56

 o.show(); //It will print 9/56
 return 0;*/
}