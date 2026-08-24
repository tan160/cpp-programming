#include <iostream>
using namespace std;

class Employee
{
    int empId;
    string name;
    float salary;

public:

    
    Employee()
    {
        empId = 0;
        name = "Unknown";
        salary = 0;
    }

    
    Employee(int id, string n, float s)
    {
        empId = id;
        name = n;
        salary = s;
    }

    
    Employee(const Employee &e)
    {
        empId = e.empId;
        name = e.name;
        salary = e.salary;
    }

    
    void display()
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "-------------------" << endl;
    }
};

int main()
{
    
    Employee e1;
    cout << "Default Constructor:" << endl;
    e1.display();

    
    Employee e2(101, "Swarali", 50000);
    cout << "Parameterized Constructor:" << endl;
    e2.display();

    
    Employee e3(e2);
    cout << "Copy Constructor:" << endl;
    e3.display();

    return 0;
}
