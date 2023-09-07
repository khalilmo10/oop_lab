#include <iostream>
#include "employee.h"
using namespace std;

int main()
{
    employee emp1;
    emp1.Setname("khalil");
    emp1.set_current_year(2023);
    emp1.Setdate_of_birth(2010);
    emp1.Setsalary(50000);
    emp1.get_all_information();
    return 0;
}
