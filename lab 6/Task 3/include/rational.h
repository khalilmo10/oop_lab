#ifndef RATIONAL_H
#define RATIONAL_H


class rational
{
public:
    rational();
    ~rational();
    rational(int num, int denom);
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int num);
    void setDenominator(int denom);
    double toDouble() const;
    void invert();
    rational operator+(const rational& other) const;
    rational operator-(const rational& other) const;
    rational operator*(const rational& other) const;
    rational operator/(const rational& other) const;

    protected:

        private:

        int numerator;
    int denominator;
};

#endif // RATIONAL_H
