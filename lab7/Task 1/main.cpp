#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    student group1;
    string a="ali";
    group1.add_student(a,11);
    cout<<group1[a]<<endl;
    a="mohammed";
    group1.add_student(a,12);
     cout<<group1[a]<<endl;
     a="ali";
   // group1[a,10];
    cout<<group1[a]<<endl;
    return 0;
}
