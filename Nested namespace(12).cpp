#include <iostream>
using namespace std;
namespace University
{
    namespace Department
    {
        void display()
        {
            cout << "University: Aditya University" << endl;
            cout << "Department: Computer Science and Engineering (CSE)" << endl;
        }
    }
}
int main()
{
    University::Department::display();
    return 0;
}
