#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived" << endl;
    }
};

int main() {
    Derived d;

    Derived* dp = &d;   // Derived pointer
    Base* bp = &d;      // Base pointer to derived object

    dp->show();
    bp->show();         // Virtual dispatch
    return 0;
}

