#include <iostream>
using namespace std;

class Academic {
public:
    void study() { cout << "Academic work" << endl; }
};

class Sports {
public:
    void play() { cout << "Sports activity" << endl; }
};

class Student : public Academic, public Sports {
public:
    void display() { cout << "Student" << endl; }
};

int main() {
    Student s;
    s.study();
    s.play();
    s.display();
    return 0;
}

