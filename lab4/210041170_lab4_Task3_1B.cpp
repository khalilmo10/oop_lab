#include<iostream>

using namespace std;

class BankAccount
{
    private:
       int account_number;
       string account_holder_name;
       string account_type;
       double account_balance;
       double account_min_balance;
    public:
       BankAccount()
       {
        account_number=0;
        account_holder_name="";
        account_type="";
        account_balance=0;
        account_min_balance=0;
       }
       BankAccount(int account_number1, string account_holder_name1, string account_type1, double account_balance1, double account_min_balance1)
       {
        account_number=account_number1;
        account_holder_name=account_holder_name1;
        account_type=account_type1;
        account_balance=account_balance1;
        account_min_balance=account_min_balance1;
       }
       void FeedInfo()
       {
          cout<<"Enter the values: "<<endl;
          cin>>account_number>>account_holder_name>>account_type>>account_balance>>account_min_balance;
       }
       void display()
       {
        cout<<"account_number: "<<account_number<<"\naccount holder name: "<<account_holder_name<<"\naccount type: "<<account_type<<"\naccount balance: "<<account_balance<<"\naccount min balance: "<<account_min_balance<<endl;
       }
       void showBalance()
       {
        cout<<"current balance is: "<<account_balance<<endl;
       }
       void deposit(double amount)
       {
        if(amount < 0)
        cout<<"Invalid amount"<<endl;
        else
        account_balance=account_balance+amount;
       }
       void withdrawal(double amount)
       {
        if(amount < 0 || account_min_balance>(account_balance-amount))
        cout<<"Invalid amount"<<endl;
         else
        account_balance=account_balance-amount;

       }
       void giveInterst()
       {
        double interset=account_balance*0.03;
         double Taxes=interset*0.1;
         account_balance=account_balance+(interset-Taxes);
       }

       ~BankAccount()
       {
        cout<<"Account of Mr. "<<account_holder_name<<" with account no: "<<account_number<<" is destroyed with a balance: "<<account_balance<<endl;

       }
};



int main()
{
    BankAccount person1(1234,"khalil","saving",1000,1000);
    person1.display();
    person1.withdrawal(500);
    person1.deposit(1000);
    person1.showBalance();
    person1.withdrawal(500);
    person1.showBalance();
    person1.withdrawal(-500);
     person1.deposit(-1000);
     person1.giveInterst();
     person1.showBalance();


}