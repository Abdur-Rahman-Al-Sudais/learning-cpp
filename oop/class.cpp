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
    StudentData std1;

    std1.name = "Victor";
    std1.marks = 543;
    std1.subjects = {"Mathematics", "Physics", "Computer Science", "English"};

    std1.displayData();

    cout << endl;
    cout << endl;

    StudentData std2;

    std2.name = "Erick";
    std2.marks = 421;
    std2.subjects = {"Biology", "Physics", "Chemistry", "English"};

    std2.displayData();

    return 0;
}