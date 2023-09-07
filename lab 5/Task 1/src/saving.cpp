#include "saving.h"
#include <iostream>
using namespace std;
int saving::count=0;
double saving::annual=0;

saving::saving()
{
    balance = 0;
    annual = 0;
    count++;
}

saving::~saving()
{
    count--;
}



void saving::calculateMonthlyInterest()
{
  float interst= balance*annual/12;
  balance = balance + interst;
  cout<<"interst is "<<interst;
}

void saving::modifyInterestRate(double n)
{
    annual= n;
}


