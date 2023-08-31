#include<iostream>

using namespace std;

class counter{

private:
int count=0;
int increment_num;

public:
void set_increment_step(int m)
{
     increment_num=m;
}
void increment()
{
     count=count+increment_num;
}
int getCount()
{
    return count;
}

void reset_count()
{
    count=0;
}


};

int main()
{
    counter obj;
    cout<<"count is "<<obj.getCount()<<endl;
    obj.set_increment_step(5);
    cout<<"count is "<<obj.getCount()<<endl;
    obj.increment();
    cout<<"count is "<<obj.getCount()<<endl;
    obj.increment();
    cout<<"count is "<<obj.getCount()<<endl;
    obj.reset_count();
    cout<<"count is "<<obj.getCount()<<endl;

   return 0;
}