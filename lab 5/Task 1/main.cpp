#include <iostream>
#include"saving.h"

using namespace std;

int main()
{
    double n;
    saving saver1,saver2;
    saver1.Setbalance(2000);
    n= saver1.Getbalance();
    cout<<"balance is "<<n;
    saver2.Setbalance(3000);
    n= saver2.Getbalance();
    cout<<"\nbalance is "<<n<<endl;
    saver1.Setannual(3);
    saver1.calculateMonthlyInterest();
    n= saver1.Getbalance();
    cout<<"\nbalance is "<<n<<endl;
    saver2.Setannual(4);
    saver2.calculateMonthlyInterest();
    n= saver2.Getbalance();
    cout<<"\nbalance is "<<n<<endl;
    cout<<"count is "<<saving::getNoOfObj();


    return 0;
}
