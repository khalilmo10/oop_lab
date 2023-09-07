#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class student
{
    public:
        student();
        ~student();

        void set_name(string n);
        void set_id(int n);
        void set_date_of_brith(int n);
        void set_cgpa(double n);
        string get_name();
        double get_cgpa();
        int get_id();
        int get_date_of_birth();
        void get_student_info();



    protected:

    private:
        int id;
        int date_of_brith;
        string name;
        double cgpa;
};

#endif // STUDENT_H
