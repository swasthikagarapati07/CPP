#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
    int vehicleId;
    string model;
    float rent;
public:
    Vehicle()
    {
        vehicleId = 101;
        model = "Swift";
        rent = 1500;
    }
    Vehicle(Vehicle &v)
    {
        vehicleId = v.vehicleId;
        model = v.model;
        rent = v.rent;
    }
    friend void display(Vehicle v1, Vehicle v2);
};
void display(Vehicle v1, Vehicle v2)
{
    cout << "Original Vehicle" << endl;
    cout << "ID: " << v1.vehicleId << endl;
    cout << "Model: " << v1.model << endl;
    cout << "Rent: " << v1.rent << endl;
    cout << "\nBooked Vehicle" << endl;
    cout << "ID: " << v2.vehicleId << endl;
    cout << "Model: " << v2.model << endl;
    cout << "Rent: " << v2.rent << endl;
}
int main()
{
    Vehicle v1;
    Vehicle v2 = v1;
    display(v1, v2);
    return 0;
}
