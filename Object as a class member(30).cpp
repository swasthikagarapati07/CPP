#include <iostream>
using namespace std;

class Address {
public:
    void display() {
        cout << "Kakinada" << endl;
    }
};

class Student {
    Address addr;   // Address object as a data member
public:
    void showAddress() {
        addr.display();
    }
};

int main() {
    Student s;
    s.showAddress();
    return 0;
}

