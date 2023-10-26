#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include "accounts.h"

class CurrentAccount: public accounts
{
    public:
        CurrentAccount();
        int get_ServiceCharge();
        int get_AccountPrefix();
        int get_nextAccount_fromInside();


        ~CurrentAccount();

    protected:

    private:
        const static int ServiceCharge;
        const static int AccountPrefix;
        static int nextAccount;
        int get_nextAccount();
};


class SavingAccount: public accounts
{
    public:
        SavingAccount();
        float get_InterestRate();
        float get_monthilDeposite();
        int get_nextAccount_fromInside();
        int get_accountPrefix();

       void set_InterestRate(float n);
       void set_monthilDeposite(float n);


        ~SavingAccount();

    protected:

    private:
        float InterestRate;
        float monthilDeposite;
        const static int accountPrefix;
        static nextAccount;
        int nextAccount();
};


class MonthlyDepositeScheme: public accounts
{
    public:
        MonthlyDepositeScheme();
        float get_InterestRate();
        float get_monthilDeposite();
        int get_nextAccount_fromInside();
        int get_accountPrefix();

       void set_InterestRate(float n);
       void set_monthilDeposite(float n);


        ~MonthlyDepositeScheme();

    protected:

    private:
        float InterestRate;
        float monthilDeposite;
        const static int accountPrefix;
        static nextAccount;
        int nextAccount();
};



class LoanAccount: public accounts
{
    public:
        LoanAccount();
        float get_InterestRate();
        float get_monthilDeposite();
        int get_nextAccount_fromInside();
        int get_accountPrefix();

       void set_InterestRate(float n);
       void set_monthilDeposite(float n);


        ~LoanAccount();

    protected:

    private:
        float InterestRate;
        float monthilDeposite;
        const static int accountPrefix;
        static nextAccount;
        int nextAccount();
};








#endif // CURRENTACCOUNT_H
