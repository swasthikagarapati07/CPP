#include <iostream>
using namespace std;

class Employee {
public:
    void login() {
        cout << "Employee logged in" << endl;
    }
};

class Faculty : public Employee {
public:
    void teach() {
        cout << "Faculty teaches" << endl;
    }
};

class Admin : public Employee {
public:
    void manage() {
        cout << "Admin manages" << endl;
    }
};

int main() {
    Faculty f;
    Admin a;
    f.login();
    f.teach();
    a.login();
    a.manage();
    return 0;
}
