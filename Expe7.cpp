#include<iostream>
using namespace std;

class Employee
{
    int empid;
    char empname[25];
    char department[25];

public:
    void getdata()
    {
        cout<<"Enter Employee ID: ";
        cin>>empid;

        cout<<"Enter Employee Name: ";
        cin>>empname;

        cout<<"Enter Department: ";
        cin>>department;
    }

    void putdata()
    {
        cout<<"\nEmployee ID: "<<empid<<endl;
        cout<<"Employee Name: "<<empname<<endl;
        cout<<"Department: "<<department<<endl;
    }
};

class TeachingStaff : public Employee
{
    char subject[25];
    char qualification[25];

public:
    void accept_data()
    {
        getdata();

        cout<<"Enter Subject: ";
        cin>>subject;

        cout<<"Enter Qualification: ";
        cin>>qualification;
    }

    void display_data()
    {
        putdata();

        cout<<"Subject: "<<subject<<endl;
        cout<<"Qualification: "<<qualification<<endl;
    }
};

class NonTeachingStaff : public Employee
{
    char designation[25];
    float workinghours;

public:
    void accept_data()
    {
        getdata();

        cout<<"Enter Designation: ";
        cin>>designation;

        cout<<"Enter Working Hours: ";
        cin>>workinghours;
    }

    void display_data()
    {
        putdata();

        cout<<"Designation: "<<designation<<endl;
        cout<<"Working Hours: "<<workinghours<<endl;
    }
};

int main()
{
    TeachingStaff teacher;
    NonTeachingStaff nonteacher;

    cout<<"\n--- Teaching Staff ---\n";
    teacher.accept_data();

    cout<<"\n--- Teaching Staff Details ---\n";
    teacher.display_data();

    cout<<"\n--- Non-Teaching Staff ---\n";
    nonteacher.accept_data();

    cout<<"\n--- Non-Teaching Staff Details ---\n";
    nonteacher.display_data();

    return 0;
}
