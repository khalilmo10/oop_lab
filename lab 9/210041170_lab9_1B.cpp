#include <iostream>
#include <cmath>
using namespace std;

//void sortShapePerimeter(TwoDshape**s,int n);

class TwoDshape
{
    protected:
    string color;
    public:
   virtual void print_shapeDetails()
    {

    }

    virtual float get_area()
    {
         
    }


};

class Square: public TwoDshape
{
    private:
    float s;
    public:
    Square(float x,string col)
    {
        s = x;
        color = col;
    }

    void print_shapeDetails()
    {
         cout<<"Number of sides: "<<4<<"\nType: Square"<<"\ncolor: "<<color<<"\nArea: "<<s*s<<"\nPerimeter: "<<4*s<<endl; 
    }

    float get_area()
    {
       return s*s;    
    }

    ~Square(){}

};

class Triangle: public TwoDshape
{
    private:
    float a,b,c;
    public:
    Triangle(float x,float y,float z,string col)
    {
        a = x;
        b = y;
        c = z;
        color = col;
    }

    void print_shapeDetails()
    {
        float s=(a+b+c)/2;
         cout<<"Number of sides: "<<3<<"\nType: Trangle"<<"\ncolor: "<<color<<"\nArea: "<<sqrt(s*(s-a)*(s-b)*(s-c))<<"\nPerimeter: "<<a+b+c<<endl; 
    }

    float get_area()
    {
        float s=(a+b+c)/2;
       return sqrt(s*(s-a)*(s-b)*(s-c));    
    }

    ~Triangle(){}

};

class Rectangle: public TwoDshape
{
    private:
    float l,w;
    public:
    Rectangle(float x,float y,string col)
    {
        l = x;
        w = y;
        color = col;
    }

    void print_shapeDetails()
    {
         cout<<"Number of sides: "<<4<<"\nType: Rectangle"<<"\ncolor: "<<color<<"\nArea: "<<l*w<<"\nPerimeter: "<<2*(l+w)<<endl; 
    }

    float get_area()
    {
       return l*w;    
    }


    ~Rectangle(){}

};
class Hexagon: public TwoDshape
{
    private:
    float a;
    public:
    Hexagon(float x,string col)
    {
        a = x;
        color = col;
    }

    void print_shapeDetails()
    {
         cout<<"Number of sides: "<<6<<"\nType: Hexagon"<<"\ncolor: "<<color<<"\nArea: "<<3*(sqrt(3)/2)*a*a<<"\nPerimeter: "<<6*a<<endl; 
    }

    float get_area()
    {
       return 3*(sqrt(3)/2)*a*a;    
    }

    ~Hexagon(){}

};



void sortShapePerimeter(TwoDshape**s,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[j]->get_area()<s[j+1]->get_area())
            {
                TwoDshape* temp=s[j+1];
                s[j+1]=s[j];
                s[j]=temp;
            }
        }

    }
}


int main()
{
    TwoDshape *t[4];
    t[0]=new Square(4,"black");
    t[1]=new Triangle(10,7,12,"Yellow");
    t[2]=new Rectangle(2,4,"white"); 
    t[3]=new Hexagon(5,"red");

    for(int i=0;i<4;i++)
    {
        t[i]->print_shapeDetails();
        cout<<endl;
    }

    sortShapePerimeter(t,4);
    cout<<" Sorted\n"<<endl;

    for(int i=0;i<4;i++)
    {
        t[i]->print_shapeDetails();
        cout<<endl;
    }


}
