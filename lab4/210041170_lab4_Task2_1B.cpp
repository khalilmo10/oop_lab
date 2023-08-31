#include<iostream>

using namespace std;

class fligth
{
private:
  int flightNumber;
  string destination;
  float distance;
  float maxFuelCapacity;
  int CalFuel()
   {
      if(distance <= 1000)
      return 500;
      if(distance > 1000 && distance <= 2000)
      return 1100;
      if(distance > 2000)
      return 2200;
   }

public:
   /*fligth()
   {
     flightNumber = 0;
     destination = "";
     distance = 0.0;
     maxFuelCapacity=0.0;
   } 
*/
  /* fligth(int flightNum,string dest,float dist,float maxFuelCap)
   {
     flightNumber = flightNum;
     destination = dest;
     distance = dist;
     maxFuelCapacity= maxFuelCap;
   } 
*/

   void FeedInfo()
   {
    cout<<"Enter the values: "<<endl;
    cin>>flightNumber>>destination>>distance>>maxFuelCapacity;
   }

   void ShowInfo()
   {
    fligth ob;
    int b;
    b=ob.CalFuel();
      cout<<"flight Number is "<<flightNumber<<"\ndestination is "<<destination<<endl;
      cout<<"distance is "<<distance<<"\nmax Fuel Capacity is "<<b<<endl;
     
      if(distance>b)
      cout<<"fuel is not fit"<<endl;
      else
      cout<<"fuel is fit"<<endl;
   }
    /*
   ~fligth(){
     cout<<"object destructured  ,"<<"Flight with "<<flightNumber<<"number is destructured"<<endl;
   }
   */
     
};


int main()
{
    fligth fl1;
    fl1.FeedInfo();
    fl1.ShowInfo();

    return 0;
}