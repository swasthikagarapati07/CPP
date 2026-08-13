#include <iostream>
using namespace std;

class University
{
    string universityName;
    string location;

public:
    University(string name, string loc)
    {
        universityName = name;
        location = loc;
    }

    class Student
    {
        int rollNo;
        string name;
        string course;

    public:
        Student()
        {
            rollNo = 0;
            name = "Unknown";
            course = "Unknown";
        }

        Student(int r, string n, string c)
        {
            rollNo = r;
            name = n;
            course = c;
        }

        void display()
        {
            cout << "\nRoll Number: " << rollNo;
            cout << "\nName: " << name;
            cout << "\nCourse: " << course << endl;
        }
    };

    void displayUniversity()
    {
        cout << "University Name: " << universityName;
        cout << "\nLocation: " << location << endl;
    }
};

int main()
{
    University u("ABC University", "Hyderabad");

    University::Student students[3] = {
        University::Student(101, "Swasthika", "CSE"),
        University::Student(102, "Naveen", "ECE"),
        University::Student(103, "Rahul", "EEE")
    };

    u.displayUniversity();

    cout << "\nStudent Details:";
    for (int i = 0; i < 3; i++)
    {
        students[i].display();
    }

    return 0;
}
