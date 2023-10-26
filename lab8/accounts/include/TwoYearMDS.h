#ifndef TWOYEARMDS_H
#define TWOYEARMDS_H

#include "accounts.h"
#include "CurrentAccount.h"

class TwoYearMDS: public accounts,public MonthlyDepositeScheme
{
    public:
        TwoYearMDS();
        void set_maximuminterset(float n);
        float get_maximuminterset();
        ~TwoYearMDS();

    protected:

    private:
        float maximuminterset;
};


class FiveYearMDS: public accounts,public MonthlyDepositeScheme
{
    public:
        FiveYearMDS();
        void set_maximuminterset(float n);
        float get_maximuminterset();
        ~FiveYearMDS();

    protected:

    private:
        float maximuminterset;
};


class InitialDepositeMDS: public accounts,public MonthlyDepositeScheme
{
    public:
        InitialDepositeMDS();
        void set_maximuminterset(float n);
        float get_maximuminterset();
        void set_initialDepositeAmount(float n);
        float get_initialDepositeAmount();
        ~InitialDepositeMDS();

    protected:

    private:
        float maximuminterset;
        float initialDepositeAmount;
};




#endif // TWOYEARMDS_H
