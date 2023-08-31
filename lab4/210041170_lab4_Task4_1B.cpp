#include<iostream>
using namespace std;

class ZooAnimal
{
    private:
        string nameOfAnimal;
        int birthYear;
        int ageNumber;
        double weight;
        double height;
        
        
    public:
         ZooAnimal()
         {
        nameOfAnimal="";
        birthYear=2023;
        ageNumber=0;
        weight=1;
        height=1;
        
         }
         ZooAnimal(string nameOfAnimal1,int ageNumber1,double weight1,double height1,int birthYear1)
         {
        nameOfAnimal=nameOfAnimal1; 
        ageNumber=ageNumber1;
        weight=weight1;
        height=height1;
         birthYear=birthYear1;
        
         }
         void set_name(string name)
         {
             nameOfAnimal=name;
         }
         void set_age(int n)
         {
            if(n<0)
            cout<<"Error: "<<endl;
            else
            ageNumber=n;
         }
         void set_brithyear(int n)
         {
            if(n<0)
            cout<<"Error: "<<endl;
            else
            birthYear=n;
         }
         void set_heigth(double n)
         {
            if(n<0)
            cout<<"Error: "<<endl;
            else
            height=n;
         }
        void set_weight(double n)
         {
            if(n<0)
            cout<<"Error: "<<endl;
            else
            weight=n;
         }
         double getWeight()
         {
            return weight;
         }
         double getHeigth()
         {
            return height;
         }
         int getAge()
         {
            return ageNumber;
         }
         int getBreathYear()
         {
            return birthYear;
         }
          string getName()
         {
            return nameOfAnimal;
         }

         void display()
         {
            cout<<"name Of Animal: "<<nameOfAnimal<<"\nbirth Year: "<<birthYear<<"\nage: "<<ageNumber<<"\nweight: "<<weight<<"\nheight: "<<height<<endl;

         }
         ~ZooAnimal()
         {
             cout<<"name Of Animal: "<<nameOfAnimal<<"\nbirth Year: "<<birthYear<<"\nage: "<<ageNumber<<"\nweight: "<<weight<<"\nheight: "<<height<<endl;

         }



};


int main()
{
   ZooAnimal animal1("Dog",2,1,1,2022);
   animal1.display();
    return 0;
    
}