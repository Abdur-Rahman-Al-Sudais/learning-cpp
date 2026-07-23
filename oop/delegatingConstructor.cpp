#include <iostream>
#include <string>

using namespace std;

class StudentData
{
public:
    string name;
    int marks;

    // Delegating Constructor
    StudentData(string stdName) : StudentData(stdName, 200) {}

    StudentData(string stdName, int stdMarks)
    {
        name = stdName;
        marks = stdMarks;
    }

    void displayData()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Marks: " << marks << endl;
    }
};

int main()
{
    StudentData std1("Erick");
    StudentData std2("Victor", 400);

    cout << std1.name << endl;
    cout << std1.marks << endl;

    cout << std2.name << endl;
    cout << std2.marks << endl;

    return 0;
}