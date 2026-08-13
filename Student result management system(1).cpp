#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float m1, m2, m3;

public:
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        m1 = m2 = m3 = 0;
    }

    Student(int r, string n, float a, float b, float c)
    {
        rollNo = r;
        name = n;
        m1 = a;
        m2 = b;
        m3 = c;
    }

    float total()
    {
        return m1 + m2 + m3;
    }

    float average()
    {
        return total() / 3;
    }

    char grade()
    {
        float avg = average();

        if (avg >= 90)
            return 'A';
        else if (avg >= 75)
            return 'B';
        else if (avg >= 60)
            return 'C';
        else if (avg >= 50)
            return 'D';
        else
            return 'F';
    }

    void display()
    {
        cout << "Roll No: " << rollNo
             << "\tName: " << name << endl;
    }

    void display(bool showGrade)
    {
        cout << "Roll No: " << rollNo
             << "\tName: " << name
             << "\tTotal: " << total()
             << "\tAverage: " << average();

        if (showGrade)
            cout << "\tGrade: " << grade();

        cout << endl;
    }
};

int main()
{
    Student s[5] = {
        Student(101, "Swasthika", 85, 90, 88),
        Student(102, "Anjali", 78, 82, 80),
        Student(103, "Rahul", 65, 70, 68),
        Student(104, "Kiran", 92, 95, 90),
        Student(105, "Priya", 55, 60, 58)
    };

    cout << "STUDENT DETAILS\n";
    cout << "---------------\n";

    for (int i = 0; i < 5; i++)
        s[i].display();

    cout << "\nSTUDENT RESULTS\n";
    cout << "---------------\n";

    for (int i = 0; i < 5; i++)
        s[i].display(true);

    return 0;
}
