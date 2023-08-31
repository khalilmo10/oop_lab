#include<iostream>

using namespace std;

class bank
{
    private:
    string name;
    int account_number;
    string type_of_account;
    int balance_amount=0;

    public:
    void customer_details_f(string name_a,int account_number_a)
    {
        name=name_a;
        account_number=account_number_a;
    }
    void account_details_f(string type_of_account_a)
    {
        type_of_account=type_of_account_a;
    }

    int balance_amount_f()
    {
        return balance_amount;
    }

    void with_draw_f(int n)
    {
        balance_amount=balance_amount-n;
    }

    void deposite(int n)
    {
        balance_amount=balance_amount+n;
    }

    void display()
    {
        cout << name<<" "<<account_number<<" "<<type_of_account<<" "<<balance_amount<<endl;
    }


};


int main()
{
    bank obj;
    obj.customer_details_f("mohammed",1234);
    obj.account_details_f("saving");
    obj.deposite(2000);
    obj.display();
    obj.with_draw_f(1000);
     obj.display();

     return 0;
}