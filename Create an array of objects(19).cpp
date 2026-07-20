#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    string brand;
    string model;
    float price;
public:
    void getData()
    {
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Price: ";
        cin >> price;
    }
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    Car cars[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of Car " << i + 1 << ":" << endl;
        cars[i].getData();
    }
    cout << "\nCar Details:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "\nCar " << i + 1 << ":" << endl;
        cars[i].display();
    }
    return 0;
}
