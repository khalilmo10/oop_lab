#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    student person1;
    person1.set_name("khalil");
    person1.set_id(210041170);
    person1.set_cgpa(3.22);
    person1.set_date_of_brith(2001);
     cout <<"printing the student information at once "<<endl;
    person1.get_student_info();
    cout <<"\n\nprinting the student information individually "<<endl;
    cout <<"name: "<< person1.get_name()<< endl;
    cout <<"id: "<< person1.get_id()<< endl;
    cout <<"cgpa: "<< person1.get_cgpa()<< endl;
    cout <<"date of birth "<< person1.get_date_of_birth()<< endl;
    return 0;
}
