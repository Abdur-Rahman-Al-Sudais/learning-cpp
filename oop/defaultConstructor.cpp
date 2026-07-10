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

    StudentData()
    {
        name = "David";
        marks = 444;
        cout << "Defulat Constructor Called" << endl;
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
    StudentData std1;

    std1.subjects = {"Mathematics", "Physics", "Computer Science", "English"};

    std1.displayData();

    return 0;
}