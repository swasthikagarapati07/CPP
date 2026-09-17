#include <iostream>
using namespace std;

class Distance {
    int meters;
public:
    Distance(int m = 0) : meters(m) {}

    friend Distance operator+(const Distance& d1,
                              const Distance& d2);

    void display() {
        cout << meters << " meters" << endl;
    }
};

Distance operator+(const Distance& d1, const Distance& d2) {
    return Distance(d1.meters + d2.meters);
}

int main() {
    Distance d1(15), d2(25);
    Distance d3 = d1 + d2;
    d3.display();
    return 0;
}
