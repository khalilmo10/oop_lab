#include "employee.h"
#include <iostream>
#include <string.h>

using namespace std;
employee::employee()
{
    //ctor
}

employee::~employee()
{
    //dtor
}

void employee::Setname(string val)
{
    if(val.length()<=2)
    name = "John Doe";
    else
        name= val;
}
string employee::Getdate_of_birth()
{
    return date_of_birth;
}
void employee::Setdate_of_birth(int val)
{
     int age=current_year-val;
    if(age > 18)
    date_of_birth = to_string(age);
    else
        date_of_birth="1 January 2002";
}
double employee::Getsalary()
{
    return salary;
}
void employee::Setsalary(double val)
{
    if(val > 10000 && val < 100000)
    salary = val;
    else
        salary=10000;
}
string employee::Getname()
{
    return name;
}

void employee::set_all_information(string val,int n ,double m)
{
    int age=current_year-n;
    if(val.length()<=2)
    name = "John Doe";
    else
    name= val;

     if(age > 18)
    date_of_birth = to_string(age);
    else
        date_of_birth="1 January 2002";

    if(m > 10000 && m < 100000)
    salary = m;
    else
        salary=10000;

}

void employee::get_all_information()
{
    cout<<"name: "<<name<<"\ndate of birth: "<<date_of_birth<<"\nsalary: "<<salary<<endl;
}

void employee::set_current_year(int n)
{
    current_year=n;
}
