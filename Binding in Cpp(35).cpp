#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived show()" << endl;
    }
};

int main() {
    Base* p = new Derived;
    p->show();          // Early/static binding because show() is non-virtual
    delete p;
    return 0;
}

