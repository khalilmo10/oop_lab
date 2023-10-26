#include <iostream>

using namespace std;

class dollars_c
{
private:
    int amount_dollar;
    float cents;

public:
    dollars_c()
    {
        amount_dollar = 0;
        cents = 0;
    }

    dollars_c(int a, float b)
    {
        amount_dollar = a;
        cents = b;
    }

    void display()
    {
        cout << "dollars " << amount_dollar << " cents" << cents << endl;
    }
};

class euro_c
{
private:
    int amount_euro;
    float cents;

public:
    euro_c()
    {
        amount_euro = 0;
        cents = 0;
    }

    euro_c(int a, float b)
    {
        amount_euro = a;
        cents = b;
    }

    void display()
    {
        cout << "euros " << amount_euro << " cents" << cents << endl;
    }
};


class taka_c
{
private:
    int amount_taka;
    float poisha;

public:
    taka_c()
    {
        amount_taka = 0;
        poisha = 0;
    }

    taka_c(int a, float b)
    {
        amount_taka = a;
        poisha = b;
    }

    operator dollars_c()
    {
        float dollar_amount = amount_taka * 0.0091 + poisha * 0.0001;
        int dollar_part = static_cast<int>(dollar_amount);
        float cents_part = (dollar_amount - dollar_part) * 100;
        return dollars_c(dollar_part, cents_part);
    }

    operator euro_c()
    {
        float euro_amount = amount_taka * 0.0085 + poisha * 0.0001;
        int euro_part = static_cast<int>(euro_amount);
        float cents_part = (euro_amount - euro_part) * 100;
        return euro_c(euro_part, cents_part);
    }
};



int main()
{
    taka_c amount(1000, 50);
    dollars_c amount_Dollars;
    euro_c amount_Euro;
    amount_Dollars = amount;
    amount_Euro = amount;
    amount_Dollars.display();
    amount_Euro.display();

    return 0;
}
