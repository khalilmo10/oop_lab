#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H
#include <iostream>
using namespace std;

class ZooAnimal
{
    public:
        ZooAnimal();
        ~ZooAnimal();
        ZooAnimal (const string& _name, int _birthYear, int _cageNumber, float _weight, int _height);
        bool operator>(const ZooAnimal& other) const;
        bool operator>=(const ZooAnimal& other) const;
        bool operator<=(const ZooAnimal& other) const;
        bool operator==(const ZooAnimal& other) const;
        bool operator!=(const ZooAnimal& other) const;
        bool operator<(const ZooAnimal& other) const;
        ZooAnimal operator+=(int amount);
        ZooAnimal operator-=(int amount);
        float getWeight() const;



    private:

    string nameOfAnimal;
    int birthYear;
    int cageNumber;
    float weightData;
    int height;
};

#endif // ZOOANIMAL_H
