#include <iostream>
#include <vector>
#include <string>

using namespace std;

class StudentData
{
private:
    string name;
    int marks;

public:
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

    // Getter
    string getName()
    {
        return name;
    }

    int getMarks()
    {
        return marks;
    }

    // Setter
    void setName(string n)
    {
        name = n;
    }

    void setMarks(int m)
    {
        marks = m;
    }
};

int main()
{
    StudentData std1("Erick", 421);

    // Set values
    std1.setName("Victor");
    std1.setMarks(300);

    // Get values
    string name = std1.getName();
    int marks = std1.getMarks();

    cout << name << endl;
    cout << marks << endl;

    return 0;
}