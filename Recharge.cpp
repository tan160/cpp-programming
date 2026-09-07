#include <iostream>
using namespace std;

class MobileRecharge
{
private:
    string mobileNumber;
    float balance;

public:
    // Constructor
    MobileRecharge(string number, float b)
    {
        mobileNumber = number;
        balance = b;
    }

    // Recharge mobile
    void recharge(float amount)
    {
        balance = balance + amount;
        cout << "Recharge successful." << endl;
    }

    // Deduct balance
    void deductBalance(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount deducted successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    // Display account details
    void display()
    {
        cout << "\n--- Mobile Account Details ---" << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    MobileRecharge m("9876543210", 200);

    m.display();

    m.recharge(300);
    m.display();

    m.deductBalance(150);
    m.display();

    return 0;
}
