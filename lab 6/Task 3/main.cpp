#include <iostream>
#include "rational.h"


using namespace std;

int main() {

    rational r1(2, 2),r2(1, 1),r3;

    r3 = r1 + r2;
    cout << "r1 + r2 = " << r3.getNumerator() << "/" << r3.getDenominator() <<endl;
    r3 = r1 - r2;
    cout << "r1 - r2 = " << r3.getNumerator() << "/" << r3.getDenominator() <<endl;
    r3 = r1 * r2;
    cout << "r1 * r2 = " << r3.getNumerator() << "/" << r3.getDenominator() <<endl;
    r3 = r1 / r2;
    cout << "r1 / r2 = " << r3.getNumerator() << "/" << r3.getDenominator() <<endl;


    return 0;
}
