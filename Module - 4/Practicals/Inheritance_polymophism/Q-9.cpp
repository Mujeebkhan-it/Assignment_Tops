//Write a Program of Two 1D Matrix Addition using Operator
//Overloading 

#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Matrix {
private:
    vector<int> data;

public:
    Matrix(const vector<int>& vec) : data(vec) {}

    Matrix operator+(const Matrix& other) const {
        if (data.size() != other.data.size()) {
            throw runtime_error("Matrices must have the same size for addition.");
        }
        vector<int> result(data.size());
        for (size_t i = 0; i < data.size(); ++i) {
            result[i] = data[i] + other.data[i];
        }
        return Matrix(result);
    }

    void setValue(size_t index, int value) {
        if (index < data.size()) {
            data[index] = value;
        }
    }

    void display() const {
        for (size_t i = 0; i < data.size(); ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Matrix m1(vector<int>(5, 0));
    Matrix m2(vector<int>(5, 0));

    for (int i = 0; i < 5; ++i) {
        m1.setValue(i, i + 1);
        m2.setValue(i, (i + 1) * 2);
    }

    cout << "Matrix m1: ";
    m1.display();

    cout << "Matrix m2: ";
    m2.display();

    Matrix result = m1 + m2;

    cout << "Result of m1 + m2: ";
    result.display();

    return 0;
}

