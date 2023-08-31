#include<iostream>

using namespace std;

class Calculator
{
    private:
      int value;
    public:
      Calculator()
      {
        value=0;
      }
      Calculator(int n)
      {
        value=n;
      }
      int getValue()
      {
        return value;
      }
      void setValue(int val)
      {
        value=val;
      } 
      void add( int num )
      {
         value=value+num;
      }  
      void subtract( int num )
      {
        value=value-num;
      }
      void multiply( int num )
      {
          value=value*num; 
      }
      void divideBy( int num )
      {
        if(num != 0)
         value=value/num;
         else
         cout<<"Error : divide by 0 is undefined"<<endl; 
      }
      void clear()
      {
        value=0;

      }
      void display()
      {
        cout<<"Calculator display: "<<value<<endl;
      } 
      ~Calculator()
      {cout<<"Calculator object is destroyed"<<endl;}

};

int main()
{
    Calculator obj;
    obj.add(10);
    obj.display();
    obj.add(7);
    obj.display();
    obj.multiply(31);
    obj.display();
     obj.subtract(42);
    obj.display();
    obj.divideBy(7);
    obj.display();
    obj.divideBy(0);
    obj.display();
    obj.add(3);
    obj.display();
    obj.subtract(1);
    obj.display();
    obj.clear();
    obj.display();
}