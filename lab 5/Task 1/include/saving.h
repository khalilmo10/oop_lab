#ifndef SAVING_H
#define SAVING_H


class saving
{
    public:
        saving();
        ~saving();

        double Getbalance() { return balance; }
        void Setbalance(double val) { balance = val; }
        static double Getannual() { return annual; }
        void Setannual(double val) { annual = val; }
        void calculateMonthlyInterest();
        static void modifyInterestRate(double n);
        static int getNoOfObj(){return count;}

    private:
        double balance;
        static double annual;
        static int count;
};

#endif // SAVING_H
