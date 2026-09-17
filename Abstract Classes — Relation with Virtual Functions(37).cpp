#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
    virtual ~Vehicle() = default;
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starts" << endl;
    }
};

int main() {
    Vehicle* v = new Car;
    v->start();
    delete v;
    return 0;
}

