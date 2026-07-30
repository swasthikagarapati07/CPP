#include <iostream>
#include <string>
using namespace std;
class Parcel
{
    int parcelId;
    float weight;
public:
    Parcel(int id, float w)
    {
        parcelId = id;
        weight = w;
    }
    friend void compareWeight(Parcel p1, Parcel p2);
};
void compareWeight(Parcel p1, Parcel p2)
{
    if (p1.weight > p2.weight)
        cout << "Parcel " << p1.parcelId << " is heavier." << endl;
    else if (p2.weight > p1.weight)
        cout << "Parcel " << p2.parcelId << " is heavier." << endl;
    else
        cout << "Both parcels have equal weight." << endl;
}
int main()
{
    Parcel p1(101, 25.5);
    Parcel p2(102, 30.2);
    compareWeight(p1, p2);
    return 0;
}
