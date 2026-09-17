#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}

    void operator++() {       // Prefix ++
        ++value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Counter c(5);
    ++c;
    c.display();
    return 0;
}
