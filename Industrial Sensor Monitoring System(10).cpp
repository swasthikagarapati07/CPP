#include <iostream>
using namespace std;
class Sensor
{
    float temperature;
    float pressure;
public:
    Sensor(float t, float p)
    {
        temperature = t;
        pressure = p;
    }
    Sensor(Sensor &s)
    {
        temperature = s.temperature;
        pressure = s.pressure;
    }
    friend void compare(Sensor s1, Sensor s2);
};
void compare(Sensor s1, Sensor s2)
{
    cout << "Current Sensor Reading" << endl;
    cout << "Temperature: " << s1.temperature << endl;
    cout << "Pressure   : " << s1.pressure << endl;
    cout << "\nPrevious Sensor Reading" << endl;
    cout << "Temperature: " << s2.temperature << endl;
    cout << "Pressure   : " << s2.pressure << endl;
    if (s1.temperature > 100 || s1.pressure > 200)
        cout << "\nMaintenance Required!" << endl;
    else
        cout << "\nSystem is Normal." << endl;
}
int main()
{
    Sensor current(105, 210);
    Sensor previous = current;
    compare(current, previous);
    return 0;
}
