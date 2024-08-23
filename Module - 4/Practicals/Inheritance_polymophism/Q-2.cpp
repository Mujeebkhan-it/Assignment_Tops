//Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Rectangle 
{
protected:
    float length;
    float width;

public:
    Rectangle(float length = 0.0, float width = 0.0) : length(length), width(width) {}

    void setDimensions(float length, float width) {
        this->length = length;
        this->width = width;
    }

    void getDimensions(float &length, float &width) const {
        length = this->length;
        width = this->width;
    }
};

class AreaCalculator : public Rectangle {
public:
    AreaCalculator(float length = 0.0, float width = 0.0) : Rectangle(length, width) {}

    float calculateArea() const {
        return length * width;
    }

    void displayArea() const {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() 
{
    float length, width;
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    
    AreaCalculator rectangle(length, width);
    rectangle.displayArea();

    return 0;
}

