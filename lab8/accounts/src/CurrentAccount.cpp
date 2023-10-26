#include "CurrentAccount.h"
#include "accounts.h"

using namespace std;

const int CurrentAccount::ServiceCharge=100;
const int CurrentAccount::AccountPrefix=100;
int CurrentAccount::nextAccount=0;


CurrentAccount::CurrentAccount()
{
    nextAccount++;
}

CurrentAccount::~CurrentAccount()
{
    //dtor
}

CurrentAccount::int get_ServiceCharge()
{
    return ServiceCharge;
}

CurrentAccount::int get_nextAccount_fromInside()
{
    return nextAccount;
}

CurrentAccount::int get_AccountPrefix()
{
    return nextAccount;
}

CurrentAccount::int get_nextAccount()
{
    return nextAccount;
}





//////////////////////////////////////

const int SavingAccount::accountPrefix=200;
int SavingAccount::nextAccount=0;

SavingAccount::SavingAccount()
{
    nextAccount++;
}

SavingAccount::~SavingAccount()
{
    //dtor
}

SavingAccount::float get_InterestRate()
{
    return InterestRate;
}

SavingAccount::float get_monthilDeposite()
{
    return monthilDeposite;
}

SavingAccount::int get_nextAccount_fromInside()
{
    return nextAccount+1;
}

SavingAccount::int get_accountPrefix()
{
    return accountPrefix;
}

SavingAccount::void set_InterestRate(float n)
{
    InterestRate=n;
}
       void set_monthilDeposite();

SavingAccount::void set_monthilDeposite(float n)
{
    InterestRate=n;
}





/////////////////////////////////



const int MonthlyDepositeScheme::accountPrefix=300;
int MonthlyDepositeScheme::nextAccount=0;

MonthlyDepositeScheme::MonthlyDepositeScheme()
{
    nextAccount++;
}

MonthlyDepositeScheme::~MonthlyDepositeScheme()
{
    //dtor
}

MonthlyDepositeScheme::float get_InterestRate()
{
    return InterestRate;
}

MonthlyDepositeScheme::float get_monthilDeposite()
{
    return monthilDeposite;
}

MonthlyDepositeScheme::int get_nextAccount_fromInside()
{
    return nextAccount+1;
}

MonthlyDepositeScheme::int get_accountPrefix()
{
    return accountPrefix;
}

MonthlyDepositeScheme::void set_InterestRate(float n)
{
    InterestRate=n;
}
       void set_monthilDeposite();

MonthlyDepositeScheme::void set_monthilDeposite(float n)
{
    InterestRate=n;
}


///////////////////////////////////////////////////////////////////



const int LoanAccount::accountPrefix=900;
int LoanAccount::nextAccount=0;

LoanAccount::LoanAccount()
{
    nextAccount++;
}

LoanAccount::~LoanAccount()
{
    //dtor
}

LoanAccount::float get_InterestRate()
{
    return InterestRate;
}

LoanAccount::float get_monthilDeposite()
{
    return monthilDeposite;
}

LoanAccount::int get_nextAccount_fromInside()
{
    return nextAccount+1;
}

LoanAccount::int get_accountPrefix()
{
    return accountPrefix;
}

LoanAccount::void set_InterestRate(float n)
{
    InterestRate=n;
}
       void set_monthilDeposite();

LoanAccount::void set_monthilDeposite(float n)
{
    InterestRate=n;
}

////////////////////////////////////////////


