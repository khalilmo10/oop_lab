#include<iostream>

using namespace std;

class employee
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

    cout<<M.get_manager_id()<<" ";
    cout<<M.get_manager_name()<<" ";
    cout<<M.get_manager_monthly_salary()<<" ";
    cout<<M.get_manager_yearIncome()<<endl;

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

