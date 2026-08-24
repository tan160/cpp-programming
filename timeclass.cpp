#include <iostream>
#include <iomanip> 

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    
    void acceptTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds
            
    
    void addTime(const Time& t1, const Time& t2) {
        
        seconds = t1.seconds + t2.seconds;
        int carryMinutes = seconds / 60;
        seconds %= 60;

        
        minutes = t1.minutes + t2.minutes + carryMinutes;
        int carryHours = minutes / 60;
        minutes %= 60;

        
        hours = t1.hours + t2.hours + carryHours;
    }

    
    void displayTime() const {
        
        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;
    }
};

int main() {
    Time t1, t2, resultantTime;

    cout << "--- Enter First Time Value ---" << endl;
    t1.acceptTime();

    cout << "\n--- Enter Second Time Value ---" << endl;
    t2.acceptTime();

    
    resultantTime.addTime(t1, t2);

    cout << "\nResultant Time (HH:MM:SS): ";
    resultantTime.displayTime();

    return 0;
}
