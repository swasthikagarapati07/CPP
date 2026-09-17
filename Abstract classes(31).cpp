#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;   // Pure virtual function
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) : r(radius) {}

    void area() override {
        cout << "Area = " << 3.14 * r * r << endl;
    }
};

int main() {
    // Shape s;              // Error: abstract class
    Circle c(5);
    c.area();
    return 0;
}

