#include<iostream>
using namespace std;

class student
{
    int roll;
    char name[25];

public:
    void getdata()
    {
        cout<<"Enter Roll Number: ";
        cin>>roll;

        cout<<"Enter Student Name: ";
        cin>>name;
    }

    void putdata()
    {
        cout<<"\nRoll No: "<<roll<<endl;
        cout<<"Student Name: "<<name<<endl;
    }
};

class StudentExam : public student
{
public:
    int sub[6];

    void accept_data()
    {
        getdata();

        for(int i=0; i<6; i++)
        {
            cout<<"Enter Marks of Subject "<<i+1<<": ";
            cin>>sub[i];
        }
    }

    void display_data()
    {
        putdata();

        for(int i=0; i<6; i++)
        {
            cout<<"Subject "<<i+1<<": "<<sub[i]<<endl;
        }
    }
};

class Studentresult : public student
{
    int sub[6];
    float per;

public:
    void accept_marks()
    {
        getdata();

        for(int i=0; i<6; i++)
        {
            cout<<"Enter Marks of Subject "<<i+1<<": ";
            cin>>sub[i];
        }
    }

    void calculate()
    {
        int total = 0;

        for(int i=0; i<6; i++)
        {
            total = total + sub[i];
        }

        per = total / 6.0;

        putdata();

        cout<<"Total Percentage: "<<per<<"%"<<endl;
    }
};

int main()
{
    StudentExam exam;
    Studentresult result;

    cout<<"\n--- Student Exam ---\n";
    exam.accept_data();
    exam.display_data();

    cout<<"\n--- Student Result ---\n";
    result.accept_marks();
    result.calculate();

    return 0;
}
