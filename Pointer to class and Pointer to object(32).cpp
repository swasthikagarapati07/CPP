#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "Student object" << endl;
    }
};

int main() {
    Student s;
    Student* ptr = &s;

    ptr->display();
    return 0;
}

