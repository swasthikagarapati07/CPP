#include<iostream>
using namespace std;
class Rectangle
{
private:
    float length,width;
public:
    void getData();
    void calculateArea();
};
void Rectangle::getData()
{
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}
void Rectangle::calculateArea()
{
    float area = length * width;
    cout << "Area of Rectangle = " << area << endl;
}
int main()
{
    Rectangle r;
    r.getData();
    r.calculateArea();
return 0;
}
