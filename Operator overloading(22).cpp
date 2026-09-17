#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m = 0) : meters(m) {}

    Distance operator+(const Distance& d) {
        return Distance(meters + d.meters);
    }

    void display() {
        cout << meters << " meters" << endl;
    }
};

int main() {
    Distance d1(10), d2(20);
    Distance d3 = d1 + d2;   // Calls operator+
    d3.display();
    return 0;
}
