#include <iostream>
using namespace std;

class Employee
{
    int empID;
    string name;
    float basicSalary, allowance;

public:
    Employee(int id, string n, float basic, float allow)
    {
        empID = id;
        name = n;
        basicSalary = basic;
        allowance = allow;
    }

    float grossSalary()
    {
        return basicSalary + allowance;
    }

    friend void compareSalary(Employee e1, Employee e2);

    void display()
    {
        cout << "\nEmployee ID: " << empID;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nAllowance: " << allowance;
        cout << "\nGross Salary: " << grossSalary() << endl;
    }

    ~Employee()
    {
        cout << "\nDestructor called for Employee " << empID << endl;
    }
};

void compareSalary(Employee e1, Employee e2)
{
    if (e1.grossSalary() > e2.grossSalary())
        cout << "\n" << e1.name << " has higher salary.";
    else if (e2.grossSalary() > e1.grossSalary())
        cout << "\n" << e2.name << " has higher salary.";
    else
        cout << "\nBoth employees have equal salary.";
}

int main()
{
    Employee e1(101, "Swasthika", 30000, 5000);
    Employee e2(102, "Anjali", 28000, 7000);

    cout << "Employee 1 Details:";
    e1.display();

    cout << "\nEmployee 2 Details:";
    e2.display();

    compareSalary(e1, e2);

    return 0;
}
