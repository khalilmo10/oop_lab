#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>

class counter
{
    public:
        counter();
        ~counter();
        counter(int a,int b);
        void set_increment_step(int a);
        int get_increment_step();
        void reset_count();
        int get_count();
        void increment_count();
        counter operator +(const counter& r)const;
        void operator +=(const counter& r);
        counter operator ++(int n);
        counter operator ++();
        bool operator ==(const counter& r)const;
        bool operator !=(const counter& r)const;
        bool operator <=(const counter& r)const;
        bool operator >=(const counter& r)const;
        bool operator <(const counter& r)const;
        bool operator >(const counter& r)const;


    protected:

    private:
        int count;
        int increment_step;
};

#endif // COUNTER_H
