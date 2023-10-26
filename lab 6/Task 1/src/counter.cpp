#include "counter.h"
#include <iostream>
counter::counter()
{
    count=0;
    increment_step=0;
}

counter::~counter()
{
    //dtor
}

counter::counter(int a,int b)
{
    count=a;
    if(b>0)
        increment_step=b;
    else
        increment_step=1;
}
void counter::set_increment_step(int a)
{
    if(a>0)
        increment_step=a;
    else
        increment_step=1;
}
int counter::get_increment_step()
{
    return increment_step;
}

void counter::reset_count()
{
    count=0;
}


int counter::get_count()
{
    return count;
}

void counter::increment_count()
{
    count=count+increment_step;
}

counter counter::operator +(const counter& r)const
{
    counter c;
   c.count=count+r.count;
   return c;
    //c1=c2+c3;
}

void counter::operator +=(const counter& r)
{
    count=count+r.count;

}

  counter counter::operator ++(int n)
  {
      counter c;
      c.count=count;
      count=count+1;
      return c;

  }
   counter counter::operator ++()
   {
      counter c;
      count=count+1;
      c.count=count;
      return c;
   }

    bool counter::operator ==(const counter& r)const
    {
        if(count==r.count)
            return true;
        else
            return false;

    }
     bool counter::operator !=(const counter& r)const
    {
        if(count!=r.count)
            return true;
        else
            return false;

    }
    bool counter::operator <=(const counter& r)const
    {
        if(count<=r.count)
            return true;
        else
            return false;

    }
    bool counter::operator >=(const counter& r)const
    {
        if(count>=r.count)
            return true;
        else
            return false;

    }
    bool counter::operator >(const counter& r)const
    {
        if(count>r.count)
            return true;
        else
            return false;

    }

     bool counter::operator <(const counter& r)const
    {
        if(count<r.count)
            return true;
        else
            return false;

    }
