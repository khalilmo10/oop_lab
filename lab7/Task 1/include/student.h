#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class student
{
    public:
        student();
        ~student();
        void add_student(string& name1,double grade);
        double operator[]( string& name1 );
      //  void operator[](string& name1,double grade1);


    private:
        string name[10];
        double grades[10];
        int i;
};

#endif // STUDENT_H
