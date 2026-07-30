#include <iostream>
#include <string>
using namespace std;
class Employee
{
    int empId;
    string name;
    float basicSalary;

public:
    Employee(int id, string n, float salary)
    {
        empId = id;
        name = n;
        basicSalary = salary;
    }
    friend void calculateSalary(Employee e);
    void display()
    {
        cout << "Employee ID   : " << empId << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
    }
};
void calculateSalary(Employee e)
{
    float hra = 0.20 * e.basicSalary;
    float da = 0.10 * e.basicSalary;
    float netSalary = e.basicSalary + hra + da;
    cout << "HRA (20%)     : " << hra << endl;
    cout << "DA (10%)      : " << da << endl;
    cout << "Net Salary    : " << netSalary << endl;
}
int main()
{
    Employee emp(101, "Rahul", 50000);
    emp.display();
    calculateSalary(emp);
    return 0;
}
