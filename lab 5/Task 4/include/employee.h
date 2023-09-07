#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <iostream>

class employee
{
    public:
        employee();
        virtual ~employee();

        string Getname();
        void Setname(string val);
        string Getdate_of_birth();
        void Setdate_of_birth(int val);
        double Getsalary();
        void Setsalary(double val);
        void set_all_information(string val,int n ,double m);
        void get_all_information();
        void set_current_year(int n);

    protected:

    private:
        string name;
        string date_of_birth;
        double salary;
        int current_year;
};

#endif // EMPLOYEE_H
