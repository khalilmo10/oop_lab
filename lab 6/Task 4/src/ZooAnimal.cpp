#include "ZooAnimal.h"
#include <iostream>
using namespace std;

ZooAnimal::ZooAnimal()
{
    nameOfAnimal = "";
    birthYear = 0;
    cageNumber = 0;
    weightData = 0;
    height = 0;
}

ZooAnimal::~ZooAnimal()
{

}

ZooAnimal::ZooAnimal (const string& name,int _birthYear, int _cageNumber, float _weight, int _height)
{
    nameOfAnimal = name;
    birthYear = _birthYear;
    cageNumber = _cageNumber;
    weightData = _weight;
    height = _height;

}

bool ZooAnimal::operator>(const ZooAnimal& other) const
{
    return weightData > other.weightData;
}

bool ZooAnimal::operator<(const ZooAnimal& other) const
{
    return weightData < other.weightData;
}

bool ZooAnimal::operator>=(const ZooAnimal& other) const
{
    return weightData >= other.weightData;
}

bool ZooAnimal::operator<=(const ZooAnimal& other) const
{
    return weightData <= other.weightData;
}

bool ZooAnimal::operator==(const ZooAnimal& other) const
{
    return weightData == other.weightData;
}

bool ZooAnimal::operator!=(const ZooAnimal& other) const
{
    return weightData != other.weightData;
}

ZooAnimal ZooAnimal::operator+=(int amount)
{
    ZooAnimal z;
    weightData += amount;
    z.weightData=weightData;
    return z;
}

ZooAnimal ZooAnimal::operator-=(int amount)
{
    ZooAnimal z;
    weightData -= amount;
    z.weightData=weightData;
    return z;
}

float ZooAnimal::getWeight() const {
    return weightData;
}


