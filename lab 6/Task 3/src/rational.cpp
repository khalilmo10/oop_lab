#include "rational.h"
#include <iostream>
using namespace std;
rational::rational()
{
    numerator= 1;
    denominator=1;
}

rational::~rational()
{
    //dtor
}

rational::rational(int num, int denom){
    cout << "num is " <<num<< " denom is "<<denom<<endl;
        if (denom == 0) {
            cout << "Error: Denominator cannot be zero." <<endl;
        }
        else
        {
           numerator= num;
           denominator=denom;
        }

    }


    int rational::getNumerator() const {
        return numerator;
    }

    int rational::getDenominator() const {
        return denominator;
    }

    void rational::setNumerator(int num) {
        numerator = num;
    }

    void rational::setDenominator(int denom) {
        if (denom != 0) {
            denominator = denom;
        }
         else
            cout << "Error: Denominator cannot be zero." <<endl;


    }

    double rational::toDouble() const {
        return static_cast<double>(numerator) / denominator;
    }

    void rational::invert() {
        if (numerator != 0) {
            swap(numerator, denominator);
        }
        else
            cout << "Error:22 Cannot invert zero." <<endl;

    }

   rational rational::operator+(const rational& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return rational(num, denom);
    }

    rational rational:: operator-(const rational& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return rational(num, denom);
    }

    rational rational:: operator*(const rational& other) const {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return rational(num, denom);
    }

    rational rational:: operator/(const rational& other) const {
        if (other.numerator != 0) {
            int num = numerator * other.denominator;
            int denom = denominator * other.numerator;
            return rational(num, denom);
        }
        else
            cout<< "Error: Division by zero." <<endl;
            exit(1);

    }

