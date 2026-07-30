#include <iostream>
#include <string>
using namespace std;
class Machine
{
    int machineId;
    string config;
public:
    Machine(int id, string c)
    {
        machineId = id;
        config = c;
    }
    Machine(Machine &m)
    {
        machineId = m.machineId;
        config = m.config;
    }
    friend void display(Machine m1, Machine m2);
};
void display(Machine m1, Machine m2)
{
    cout << "Original Machine" << endl;
    cout << "ID: " << m1.machineId << endl;
    cout << "Configuration: " << m1.config << endl;
    cout << "\nCopied Machine" << endl;
    cout << "ID: " << m2.machineId << endl;
    cout << "Configuration: " << m2.config << endl;
}
int main()
{
    Machine m1(1, "Auto Mode");
    Machine m2 = m1;
    display(m1, m2);
    return 0;
}
