#include <iostream>
namespace Demo
{
    void display()
    {
        std::cout << "Hello from Demo namespace!" << std::endl;
    }
}
using namespace std;
int main()
{
    cout << "Using namespace directive:" << endl;
    Demo::display();
return 0;
}
