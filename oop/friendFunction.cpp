#include <iostream>
#include <vector>
#include <string>

using namespace std;

class StudentData
{
public:
    string name;
    int marks;

    StudentData(string stdName, int stdMarks) : name(stdName), marks(stdMarks) {}

    void displayData() const
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Marks: " << marks << endl;
    }

    friend bool compareMarks(const StudentData &std1, const StudentData &std2);
};

bool compareMarks(const StudentData &std1, const StudentData &std2)
{
    return std1.marks > std2.marks;
}

int main()
{
    StudentData std1("Erick", 100);
    StudentData std2("Victor", 200);

    if (compareMarks(std1, std2))
    {
        cout << std1.name << " has greater marks than " << std2.name << endl;
    }
    else
    {
        cout << std2.name << " has greater marks than " << std1.name << endl;
    }

    return 0;
}