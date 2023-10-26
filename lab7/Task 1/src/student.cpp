#include "student.h"
#include <iostream>
using namespace std;

student::student()
{
    i=0;
}

student::~student()
{
    //dtor
}

void student::add_student(string& name1,double grade1)
{
    name[i]=name1;
    grades[i]=grade1;
    i++;
}

 double student::operator[](string& name1 )
 {

     for(int j=0; j<=i && i!=10;j++)
     {
         if(name1==name[j])
         {
            return grades[j];
         }
     }
     exit(1);
 }

 /*void student::operator[](string& name1,double grade1 )
 {

     for(int j=0; j<=i && i!=10;j++)
     {
         if(name1==name[j])
         {
             name[j]=name1;
             grade[j]=grade1;
             break;
         }
     }
 }
*/

