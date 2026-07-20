#include <iostream>
using namespace std;
namespace VeryLongNamespaceName
{
    void display()
    {
        cout << "Namespace alias example." << endl;
    }
}
namespace VLN = VeryLongNamespaceName;
int main()
{
    VLN::display();
    return 0;
}
