#include<iostream>

using namespace std;


class Rational_number
{
    private:
    int numerator;
    int denominator;

    public:

    void assign(int num, int deno)
    {
        if(deno==0)
        cout << "Error" << endl;
        else
        {
        numerator=num;
        denominator=deno;
        }
    }

    double convert()
    {
        return (double)numerator/denominator;
    }
    void invert()
    {
        if(numerator==0)
        cout << "Error" << endl;
        else
        {
            int swap;
            swap = numerator;
            numerator=denominator;
            denominator=swap;
        }
    }

    void display()
    {
        cout<<numerator << "/"<<denominator<<endl;
    }


};


int main()
{
    Rational_number obj;
    obj.assign(3,2);
    obj.display();
    cout<<obj.convert()<<endl;
    obj.invert();
    obj.display();
    obj.assign(3,0);
    obj.assign(0,3);
    obj.display();
    obj.invert();
    
    return 0;
    
}