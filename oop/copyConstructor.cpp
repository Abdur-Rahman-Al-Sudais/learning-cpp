#include <iostream>
#include <vector>
#include <string>

using namespace std;

class StudentData
{
public:
    string *name;
    int marks;
    vector<string> subjects;

    StudentData(string stdName, int stdMarks, vector<string> stdSubjects)
    {
        name = new string(stdName);
        marks = stdMarks;
        subjects = stdSubjects;
        cout << "Constructor Called" << endl;
    }

    StudentData(const StudentData &other)
    {
        name = new string(*other.name);
        marks = other.marks;
        subjects = other.subjects;
        cout << "Copy Constructor Called" << endl;
    }

    ~StudentData()
    {
        delete name;
        cout << "Destructor Called" << endl;
    }

    void displayData()
    {
        cout << "Student Name: " << *name << endl;
        cout << "Student Marks: " << marks << endl;

        cout << "Student Subjects: ";
        for (string subject : subjects)
        {
            cout << subject << " ";
        }

        cout << endl;
    }
};

int main()
{
    StudentData std1("Erick", 421, {"Mathematics", "Physics", "Computer Science", "English"});

    StudentData copiedStd1 = std1;

    *std1.name = "victor";

    cout << "Original" << endl;
    std1.displayData();

    cout << "Copy" << endl;
    copiedStd1.displayData();

    return 0;
}