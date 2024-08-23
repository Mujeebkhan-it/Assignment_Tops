// Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
#include <iomanip>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& name = "", int age = 0) : name(name), age(age) {}

    void setPersonData(const string& name, int age) 
	{
        this->name = name;
        this->age = age;
    }

    void getPersonData(string& name, int& age) const 
	{
        name = this->name;
        age = this->age;
    }

    void displayPersonData() const 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person 
{
protected:
    int rollNumber;
    float marks[5];
    static const int numSubjects = 5;

public:
    Student(const string& name = "", int age = 0, int rollNumber = 0)
        : Person(name, age), rollNumber(rollNumber) {}

    void setStudentData(int rollNumber, const float marks[]) {
        this->rollNumber = rollNumber;
        for (int i = 0; i < numSubjects; ++i) {
            this->marks[i] = marks[i];
        }
    }

    void getStudentData(int& rollNumber, float marks[]) const {
        rollNumber = this->rollNumber;
        for (int i = 0; i < numSubjects; ++i) {
            marks[i] = this->marks[i];
        }
    }

    void displayStudentData() const {
        displayPersonData();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: ";
        for (int i = 0; i < numSubjects; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class MarkSheet : public Student 
{
public:
    MarkSheet(const string& name = "", int age = 0, int rollNumber = 0)
        : Student(name, age, rollNumber) {}

    float calculateTotalMarks() const {
        float total = 0;
        for (int i = 0; i < numSubjects; ++i) {
            total += marks[i];
        }
        return total;
    }

    float calculateAverageMarks() const {
        return calculateTotalMarks() / numSubjects;
    }

    void displayMarkSheet() const {
        displayStudentData();
        cout << "Total Marks: " << calculateTotalMarks() << endl;
        cout << "Average Marks: " << fixed << setprecision(2) << calculateAverageMarks() << endl;
    }
};

int main() 
{
    string name;
    int age, rollNumber;
    float marks[5];

    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter student's age: ";
    cin >> age;
    cout << "Enter roll number: ";
    cin >> rollNumber;

    cout << "Enter marks for 5 subjects: ";
    for(int i = 0; i < 5; ++i) 
	{
        cin >> marks[i];
    }

    MarkSheet markSheet(name, age, rollNumber);
    markSheet.setStudentData(rollNumber, marks);
    markSheet.displayMarkSheet();

    return 0;
}


