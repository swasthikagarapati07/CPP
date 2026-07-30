#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    int m1, m2, m3;
public:
    Student(string n, int a, int b, int c)
    {
        name = n;
        m1 = a;
        m2 = b;
        m3 = c;
    }
    friend void calculateResult(Student s);
};
void calculateResult(Student s)
{
    int total = s.m1 + s.m2 + s.m3;
    float percentage = total / 3.0;
    char grade;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else
        grade = 'F';
    cout << "Student Name : " << s.name << endl;
    cout << "Total Marks  : " << total << endl;
    cout << "Percentage   : " << percentage << endl;
    cout << "Grade        : " << grade << endl;
}
int main()
{
    Student s("Rahul", 85, 90, 95);
    calculateResult(s);
    return 0;
}
