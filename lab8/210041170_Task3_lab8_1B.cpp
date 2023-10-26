#include<iostream>

using namespace std;


class ContactInformation
{
    protected:
    int primary_contact_number;
    int secondary_contact_number;
    string email;
    public:
    ContactInformation()
    {

    }

    ~ContactInformation()
    {

    }


};
class address
{
    protected:
    int house;
    string road;
    string city;
    int zipcode;
    string country;
    string district;
    public:
    address()
    {

    }

    ~address()
    {

    }
};

class employee: public address, public ContactInformation
{
    private:
        int emp_id;
        string name;
        float monthly_salary;
        public:

    employee()
    {

    };

    employee(int id,string name1,float salary)
    {
        emp_id =id;
        name = name1;
        monthly_salary=salary;     
    };

    void set_id(int id)
    {
       emp_id = id;
    }

    void set_name(string name1)
    {
        name = name1;
    }

    void set_salary(float salary)
    {
        monthly_salary = salary;
    }

    int get_id()
    {
        return emp_id;
    }
    string get_name()
    {
        return name;
    }
    float get_monthly_salary()
    {
        return monthly_salary;
    }

    float get_yearIncome()
    {
        return monthly_salary*12;
    }
/////////////////////////////////////////////////
    void set_house(int n)
    {
        house=n;
    }

    void set_zipcode(int n)
    {
        zipcode=n;
    }

    void set_road(string name)
    {
        road=name;
    }

    void set_city(string name)
    {
        city=name;
    }

    void set_country(string name)
    {
         country=name;
    }

    void set_district(string name)
    {
        district=name;
    }

    string get_district()
    {
        return district;  
    }

    string get_country()
    {
        return country;  
    }

    string get_city()
    {
        return city;  
    }

    string get_road()
    {
        return road;  
    }
    int get_zipcode()
    {
        return zipcode;  
    }
    int get_house()
    {
        return house;  
    }
////////////////////////////////////////
    void set_primary_contact_number(int n)
    {
        primary_contact_number=n;
    }
    void set_secondary_contact_number(int n)
    {
        secondary_contact_number=n;
    }
    void set_email(string e)
    {
       email=e;
    }

    int get_primary_contact_number()
    {
        return primary_contact_number;
    }
    
    int get_secondary_contact_number()
    {
        return secondary_contact_number;
    }

    string get_email()
    {
        return email;
    }



    //////////////////////////////////
    ~employee()
    {
        
    };

};

class Manager : public employee
{
    public:
    Manager()
    {
         
    }

    void set_monthly_salary(float monthly_salary)
    {
        set_salary(monthly_salary);
    }

    void set_manager_name(string m)
    {
        set_name(m);
    }

    void set_manager_id(int m)
    {
        set_id(m);
    }

    string get_manager_name()
    {
        return get_name();
    }

    int get_manager_id()
    {
        return get_id();
    }
    
    float get_manager_monthly_salary()
    {
        return get_monthly_salary();
    }

    float get_manager_yearIncome()
    {
        return get_yearIncome();
    }

    ~Manager()
    {

    }

};

class Engineer : public employee
{
    public:
    Engineer()
    {
         
    }

    void set_monthly_salary(float monthly_salary)
    {
        set_salary(monthly_salary);
    }

    void set_Engineer_name(string m)
    {
        set_name(m);
    }

    void set_Engineer_id(int m)
    {
        set_id(m);
    }

    string get_Engineer_name()
    {
        return get_name();
    }

    int get_Engineer_id()
    {
        return get_id();
    }
    
    float get_Engineer_monthly_salary()
    {
        return get_monthly_salary();
    }

    float get_Engineer_yearIncome()
    {
        return get_yearIncome();
    }


    ~Engineer()
    {

    }

};

class Designer : public employee
{
    public:
    Designer()
    {
         
    }

    void set_monthly_salary(float monthly_salary)
    {
        set_salary(monthly_salary);
    }

    void set_Designer_name(string m)
    {
        set_name(m);
    }

    void set_Designer_id(int m)
    {
        set_id(m);
    }

    string get_Designer_name()
    {
        return get_name();
    }

    int get_Designer_id()
    {
        return get_id();
    }
    
    float get_Designer_monthly_salary()
    {
        return get_monthly_salary();
    }

    float get_Designer_yearIncome()
    {
        return get_yearIncome();
    }

    ~Designer()
    {

    }

};


int main()
{
    Manager M;
    Engineer E;
    Designer D;
    M.set_manager_id(1);
    M.set_manager_name("mohammed");
    M.set_monthly_salary(10000);

    M.set_city("Dhaka");
    M.set_country("Bangladesh");
    M.set_zipcode(123);
    M.set_district("Gazipor");
    M.set_house(44);
    M.set_primary_contact_number(1812345);
    M.set_secondary_contact_number(1324655);
    M.set_email("JGSD@Gazipor.com");

    cout<<M.get_manager_id()<<" ";
    cout<<M.get_manager_name()<<" ";
    cout<<M.get_manager_monthly_salary()<<" ";
    cout<<M.get_city()<<" ";
    cout<<M.get_country()<<" ";
    cout<<M.get_zipcode()<<" ";
    cout<<M.get_district()<<" ";
    cout<<M.get_house()<<" ";
    cout<<M.get_primary_contact_number()<<" ";
    cout<<M.get_secondary_contact_number()<<" ";
    cout<<M.get_email()<<endl;


    E.set_Engineer_id(2);
    E.set_Engineer_name("Ali");
    E.set_monthly_salary(8000);

    cout<<E.get_Engineer_id()<<" ";
    cout<<E.get_Engineer_name()<<" ";
    cout<<E.get_Engineer_monthly_salary()<<" ";
    cout<<E.get_Engineer_yearIncome()<<endl;


    D.set_Designer_id(3);
    D.set_Designer_name("Ahmed");
    D.set_monthly_salary(7000);

    cout<<D.get_Designer_id()<<" ";
    cout<<D.get_Designer_name()<<" ";
    cout<<D.get_Designer_monthly_salary()<<" ";
    cout<<D.get_Designer_yearIncome()<<endl;

    return 0;
}

