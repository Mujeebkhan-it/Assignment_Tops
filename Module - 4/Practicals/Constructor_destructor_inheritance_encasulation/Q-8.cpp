//Write a C++ program to implement a class called Student that has private
//member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display
//the student's information. Accept address from each student implement
//using of aggregation

#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zipCode;

public:
    Address(const string& street = "", 
            const string& city = "", 
            const string& state = "", 
            const string& zipCode = "")
        : street(street), city(city), state(state), zipCode(zipCode) {}

    void setAddress(const string& street, const string& city, const string& state, const string& zipCode) {
        this->street = street;
        this->city = city;
        this->state = state;
        this->zipCode = zipCode;
    }

    string getAddress() const {
        return street + ", " + city + ", " + state + " - " + zipCode;
    }
};

class Student 
{
private:
    string name;
    string className;
    int rollNumber;
    float marks;
    Address address;

    char calculateGrade() const {
        if (marks >= 90) return 'A';
        if (marks >= 80) return 'B';
        if (marks >= 70) return 'C';
        if (marks >= 60) return 'D';
        return 'F';
}

public:
    Student(const string& name = "", 
            const string& className = "", 
            int rollNumber = 0, 
            float marks = 0.0, 
            const Address& address = Address())
        : name(name), className(className), rollNumber(rollNumber), marks(marks), address(address) {}

    void setStudent(const string& name, const string& className, int rollNumber, float marks, const Address& address) {
        this->name = name;
        this->className = className;
        this->rollNumber = rollNumber;
        this->marks = marks;
        this->address = address;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Address: " << address.getAddress() << endl;
    }
};

int main() {
    Address address("2782 Charwat", "Dariyapur", "Ahmedabad", "380001");
    Student student("Mujeeb", "10th Grade", 101, 85.5, address);

    student.display();

    return 0;
}

