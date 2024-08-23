//. Assume that the test results of a batch of students are stored in three
//different classes. Class Students are storing the roll number. Class Test
//stores the marks obtained in two subjects and class result contains the
//total marks obtained in the test. The class result can inherit the details
//of the marks obtained in the test and roll number of students.
//(Multilevel Inheritance)

#include<iostream>
using namespace std;

class Students 
{
	protected:
    int roll_number;
	public:
    Students(int roll) : roll_number(roll) {}
};

class Test : public Students 
{
	protected:
    int marks_subject1;
    int marks_subject2;	
	public:
    Test(int roll, int marks1, int marks2) 
        : Students(roll), marks_subject1(marks1), marks_subject2(marks2) {}
};

class Result : public Test 
{
	private:
    int total_marks;
	public:
    Result(int roll, int marks1, int marks2)
        : Test(roll, marks1, marks2) {
        total_marks = calculateTotalMarks();
    }

    int calculateTotalMarks() 
	{
        return marks_subject1 + marks_subject2;
    }

    void displayResult() 
	{
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks in Subject 1: " << marks_subject1 << endl;
        cout << "Marks in Subject 2: " << marks_subject2 << endl;
        cout << "Total Marks: " << total_marks << endl;
    }
};


int main() 
{
    Result student_result(101, 85, 90);
    student_result.displayResult();
    return 0;
}

