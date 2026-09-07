#include <iostream>
#include <string>
using namespace std;

class savingacc
{
private:
    string holdername;
    int accNumber;
    double bal;
    double interestRate;

public:
    savingacc(string name, int accNum, double initbalance, double rate)
    {
        holdername = name;
        accNumber = accNum;
        bal = initbalance;
        interestRate = rate;
    }

    void deposit(double amount)
    {
        bal += amount;
        cout << "Deposited: Rs " << amount << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= bal)
        {
            bal -= amount;
            cout << "Withdrawn: Rs " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void applyInterest()
    {
        double interestAmount = bal * interestRate / 100;
        bal += interestAmount;
        cout << "Interest Applied: Rs " << interestAmount << endl;
    }

    void display()
    {
        cout << "\n[Saving Account]" << endl;
        cout << "Account Holder: " << holdername << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: Rs " << bal << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class checkingAccount
{
private:
    string holdername;
    int accNumber;
    double bal;
    double transactionFee;

public:
    checkingAccount(string name, int accNum, double initbal, double fee)
    {
        holdername = name;
        accNumber = accNum;
        bal = initbal;
        transactionFee = fee;
    }

    void deposit(double amount)
    {
        bal += amount;
        cout << "Deposited: Rs " << amount << endl;
    }

    void withdraw(double amount)
    {
        double total = amount + transactionFee;

        if (total <= bal)
        {
            bal -= total;
            cout << "Withdrawn: Rs " << amount
                 << " (Rs " << transactionFee << " fee applied)" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display()
    {
        cout << "\n[Checking Account]" << endl;
        cout << "Account Holder: " << holdername << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: Rs " << bal << endl;
        cout << "Transaction Fee: Rs " << transactionFee << endl;
    }
};

int main()
{
    savingacc saving("Swanand", 8314, 8000.0, 3.0);

    saving.display();
    saving.deposit(2000);
    saving.withdraw(4000);
    saving.applyInterest();
    saving.display();

    checkingAccount checking("Sandip", 4444, 5000.0, 10.0);

    checking.display();
    checking.deposit(2000);
    checking.withdraw(4000);
    checking.display();

    return 0;
}
