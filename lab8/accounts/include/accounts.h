#ifndef ACCOUNTS_H
#define ACCOUNTS_H
#include<string>
using namespace std;
class accounts
{
    public:
        accounts();

        void set_accountNo(string n);
        void set_name(string n);
        void set_balance(float n);
        string get_accountNo();
        string get_name();
        float get_balance();
        ~accounts();

    protected:

    private:
        string accountNo;
        string accountName;
        float balance;

};

#endif // ACCOUNTS_H
