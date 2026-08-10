#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int empID;
    string name;
    double salary;

public:
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        
        cin.ignore(); 
        
        cout << "Enter Employee Name: ";
        getline(cin, name);
        
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID : " << empID << endl;
        cout << "Name        : " << name << endl;
        cout << "Salary      : $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.acceptDetails();
    emp.displayDetails();

    return 0;
}

