#include<iostream>
using namespace std;
class Student
{
public:
  string name;
  int marks;
  void input()
  {
  cout <<"Enter name:";
  cin >>"name;
  cout <<"Enter marks:";
  cin marks;
  }
  void display()
  {
    cout << "Name = " << name << endl;
    cout << "Marks = " << marks <<
  endl;
  }
  int main ()
  {
   Student stud;
   stud input();
   stud,display();
   return 0;
  }
