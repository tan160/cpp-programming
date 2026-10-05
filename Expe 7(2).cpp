#include<iostream>
using namespace std;

class student
{
    int roll;
    char name[25];

public:
    void getdata()
    {
        cout<<"............... "<<endl;
        cout<<"Enter Roll Number: ";
        cin>>roll;

        cout<<"\nEnter Student name: ";
        cin>>name;
    }

    void putdata()
    {
        cout<<"\n......................"<<endl;
        cout<<"***** Student Marklist *****"<<endl;
        cout<<"......................"<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Student Name: "<<name<<endl;
    }
};

class StudentExam : public student
{
public:
    int sub[6];
    float per;

    void accept_data()
    {
        getdata();

        for(int i=0; i<6; i++)
        {
            cout<<"Enter Marks for Subject "<<i+1<<" : ";
            cin>>sub[i];
        }
    }

    void display_data()
    {
        putdata();

        for(int i=0; i<6; i++)
        {
            cout<<"Marks of Subject "<<i+1<<" : "<<sub[i]<<endl;
        }
    }
};

class Studentresult : public StudentExam
{
public:
    void calculate()
    {
        int total = 0;

        for(int i=0; i<6; i++)
        {
            total = total + sub[i];
        }

        per = total / 6.0;

        cout<<"\nTotal Percentage: "<<per<<"%"<<endl;
        cout<<"---------------------------"<<endl;
    }
};

int main()
{
    Studentresult str;
    int cnt;

    cout<<"Enter No. of student you want: ";
    cin>>cnt;

    for(int i=0; i<cnt; i++)
    {
        str.accept_data();
        str.display_data();
        str.calculate();
    }

    return 0;
}
