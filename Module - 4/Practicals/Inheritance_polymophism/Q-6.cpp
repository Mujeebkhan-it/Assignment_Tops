//Write a C++ Program to show access to Private Public and Protected
//using Inheritance

#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    Base() : privateVar(1), protectedVar(2), publicVar(3) {}

    void showBase() {
        cout << "Base class:" << endl;
        cout << "Private Variable: " << privateVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    cout << "Accessing from Base class object:" << endl;
    baseObj.showBase();
    cout << "Public Variable: " << baseObj.publicVar << endl;

    cout << "\nAccessing from Derived class object:" << endl;
    derivedObj.showDerived();
    cout << "Public Variable: " << derivedObj.publicVar << endl;

    return 0;
}

