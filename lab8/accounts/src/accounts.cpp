#include "accounts.h"
using namespace std;
accounts::accounts()
{
    //ctor
}

accounts::~accounts()
{
    //dtor
}


accounts:: void set_accountNo(string n)
{
    accountNo=n;
}

accounts:: void set_name(string n)
{
    accountName=n;
}

accounts:: void set_balance(float n)
{
    balance = n;
}

accounts:: string get_accountNo()
{
    return accountNo;
}

accounts:: string get_name()
{
    return accountName;
}

accounts:: float get_balance()
{
    return balance;
}
