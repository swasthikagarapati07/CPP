#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "Person" << endl;
    }
};

class Student : virtual public Person {};
class Employee : virtual public Person {};

class TeachingAssistant : public Student, public Employee {};

int main() {
    TeachingAssistant t;
    t.show();   // Unambiguous
    return 0;
}

