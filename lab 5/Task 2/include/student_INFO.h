#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

using namespace std;

class student_INFO
{
    public:
        student_INFO();
        ~student_INFO();
        void set_name(string n);
         void set_id(int n);
         void set_date_of_brith(string n);
         void set_cgpa(double n);
        string get_name();
        double get_cgpa();
        int get_id();
        int get_date_of_birth();
        void get_student_info();


    private:
     string name;
     int date_of_brith;
     int id;
     double cgpa;
};

#endif // STUDENT_INFO_H
