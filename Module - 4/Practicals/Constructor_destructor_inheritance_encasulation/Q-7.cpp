//Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.

#include <iostream>
#include <sstream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool isValidDay(int day, int month) const {
        if (month < 1 || month > 12) return false;
        if (day < 1 || day > 31) return false;
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            return day <= 30;
        }
        if (month == 2) {
            return day <= 28;
        }
        return true;
    }

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {
        if (!isValid()) {
            cerr << "Invalid date provided. Setting to default (1/1/2000)." << endl;
            day = 1;
            month = 1;
            year = 2000;
        }
    }

    void set(int d, int m, int y) {
        if (isValidDay(d, m)) {
            day = d;
            month = m;
            year = y;
        } else {
            cerr << "Invalid date." << endl;
        }
    }

    string get() const {
        stringstream ss;
        if (isValid()) {
            ss << day << '/' << month << '/' << year;
        } else {
            ss << "Invalid date";
        }
        return ss.str();
    }

    bool isValid() const {
        return isValidDay(day, month);
    }
};

int main() {
    Date date1;
    cout << "Date1: " << date1.get() << endl;

    Date date2;
    date2.set(29, 2, 2024);
    cout << "Date2: " << date2.get() << endl;

    date2.set(28, 2, 2024);
    cout << "Date2: " << date2.get() << endl;

    date2.set(32, 1, 2024);
    cout << "Date2: " << date2.get() << endl;

    return 0;
}

