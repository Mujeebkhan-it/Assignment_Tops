//.Write a program to concatenate the two strings using
//Operator Overloading

#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString(const string& s) : str(s) {}

    MyString operator+(const MyString& other) const {
        return MyString(str + other.str);
    }

    void display() const {
        cout << str;
    }
};

int main() {
    MyString s1("Hellow ");
    MyString s2("Sir!");

    MyString result = s1 + s2;

    cout << "Concatenated String: ";
    result.display();
    cout << endl;

    return 0;
}

