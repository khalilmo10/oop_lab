#include "student_INFO.h"
using namespace std;
student_INFO::student_INFO()
{
    name ="";
    id=0;
    cgpa=0;
    date_of_brith=0;
}

student_INFO::~student_INFO()
{
    //dtor
}

void student_INFO::set_name(string n)
{
    name= n;
}
void student_INFO::set_id(int n)
{
    id= n;
}
void student_INFO::set_date_of_brith(string n)
{
    date_of_brith= n;
}
void student_INFO::set_cgpa(double n)
{
    cgpa= n;
}

string student_INFO::get_name()
{
    return name;
}

double student_INFO::get_cgpa();
{
    return cgpa;
}
int student_INFO::get_id()
{
    return id;
}
int student_INFO:: get_date_of_birth()
{
    return date_of_brith;
}

void student_INFO::get_student_info()
{
    cout<<"name: "<<name<<"\nid: "<<id<<"\ndate of brith: "<<date_of_brith<<"\nCGPA: "<<cgpa<<endl;
}
