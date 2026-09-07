#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;
    float HRA;
    float DA;
    float grossSalary;

public:
 
    Employee()
    {
        id = 0;
        name = "Marry";
        salary = 0;
        HRA = 0;
        DA = 0;
        grossSalary = 0;
    }

    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;

        
        HRA = salary * 0.20;
        DA = salary * 0.10;


        grossSalary = salary + HRA + DA;
    }

    Employee(const Employee &e)
    {
        id = e.id;
        name = e.name;
        salary = e.salary;
        HRA = e.HRA;
        DA = e.DA;
        grossSalary = e.grossSalary;
    }

    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }

};

int main()
{
    Employee e1;

    cout << " Default Constructor " << endl;
    e1.display();
    Employee e2(101, "Tom", 600000);

    cout << "\n Parameterized Constructor " << endl;
    e2.display();

    Employee e3(e2);

    cout << "\nCopy Constructor" << endl;
    e3.display();

    return 0;
}
