#include "student.h"
#include <iostream>
using namespace std;
student::student()
{
    name ="";
    id=0;
    cgpa=0;
    date_of_brith=0;
}

student::~student()
{
    //dtor
}


void student::set_name(string n)
{
    name= n;
}
void student::set_id(int n)
{
    id= n;
}
void student::set_date_of_brith(int n)
{
    date_of_brith= n;
}
void student::set_cgpa(double n)
{
    cgpa= n;
}

string student::get_name()
{
    return name;
}

double student::get_cgpa()
{
    return cgpa;
}
int student::get_id()
{
    return id;
}
int student:: get_date_of_birth()
{
    return date_of_brith;
}

void student::get_student_info()
{
    cout<<"name: "<<name<<"\nid: "<<id<<"\ndate of brith: "<<date_of_brith<<"\nCGPA: "<<cgpa<<endl;
}
