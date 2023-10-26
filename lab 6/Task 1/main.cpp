#include <iostream>
#include "counter.h"
using namespace std;

int main()
{
    counter c1,c2(1,1),c3(2,1);
    cout<<"c1 count is "<<c1.get_count()<<endl;
    cout<<"c2 count is "<<c2.get_count()<<endl;
    cout<<"c3 count is "<<c3.get_count()<<endl;
    cout<<"c1 increment step is "<<c1.get_increment_step()<<endl;
    cout<<"c2 increment step is "<<c2.get_increment_step()<<endl;
    cout<<"c3 increment step is "<<c3.get_increment_step()<<endl;
    c1=c2+c3;
    cout<<"c1 count is "<<c1.get_count()<<endl;
    c1+=c2;
    cout<<"c1 count is "<<c1.get_count()<<endl;
     c1=c2++;
    cout<<"c1 count is "<<c1.get_count()<<endl;
     cout<<"c2 count is "<<c2.get_count()<<endl;
      c1=++c2;
    cout<<"c1 count is "<<c1.get_count()<<endl;
    cout<<"c2 count is "<<c2.get_count()<<endl;

    if(c1==c2)
        cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    //////
    if(c1!=c2)
        cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    /////////
    if(c1<=c2)
        cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    //////
    if(c1>=c2)
        cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    ////////
    if(c1<c2)
        cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    //////////
    if(c1>c2)
        cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    //////////

    return 0;
}
