#include <iostream>
#include <vector>
#include <string>

using namespace std;

class StudentData
{
public:
    string name;
    int marks;
    vector<string> subjects;

    StudentData(string stdName, int stdMarks, vector<string> stdSubjects)
    {
        name = stdName;
        marks = stdMarks;
        subjects = stdSubjects;
        cout << "Parameter Constructor Called" << endl;
    }

    void displayData()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Marks: " << marks << endl;

        cout << "Student Subjects: ";
        for (string subject : subjects)
        {
            cout << subject << " ";
        }
    }
};

int main()
{
    StudentData std1("Erick", 421, {"Mathematics", "Physics", "Computer Science", "English"});

    std1.displayData();

    return 0;
}