//Create a class person having members name and age. Derive a class
//student having member percentage. Derive another class teacher
//having member salary. Write necessary member function to initialize,
//read and write data. Write also Main function (Multiple Inheritance)

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& name = "", int age = 0) : name(name), age(age) {}

    void setPersonData(const string& name, int age) {
        this->name = name;
        this->age = age;
    }

    void getPersonData(string& name, int& age) const {
        name = this->name;
        age = this->age;
    }

    void displayPersonData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    Student(const string& name = "", int age = 0, float percentage = 0.0)
        : Person(name, age), percentage(percentage) {}

    void setStudentData(const string& name, int age, float percentage) {
        setPersonData(name, age);
        this->percentage = percentage;
    }

    void getStudentData(string& name, int& age, float& percentage) const {
        getPersonData(name, age);
        percentage = this->percentage;
    }

    void displayStudentData() const {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
protected:
    float salary;

public:
    Teacher(const string& name = "", int age = 0, float salary = 0.0)
        : Person(name, age), salary(salary) {}

    void setTeacherData(const string& name, int age, float salary) {
        setPersonData(name, age);
        this->salary = salary;
    }

    void getTeacherData(string& name, int& age, float& salary) const {
        getPersonData(name, age);
        salary = this->salary;
    }

    void displayTeacherData() const {
        displayPersonData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student("Mujeeb", 23, 85.5);
    Teacher teacher("Ridham Sir", 25, 50000.0);
 
    cout << "Student Information:" << endl;
    student.displayStudentData();

    cout << "\nTeacher Information:" << endl;
    teacher.displayTeacherData();

    return 0;
}

