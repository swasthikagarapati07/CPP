#include <iostream>
using namespace std;
namespace Engineering
{
    void course()
    {
        cout << "Engineering Course: Computer Science Engineering (CSE)" << endl;
    }
}
namespace Medical
{
    void course()
    {
        cout << "Medical Course: MBBS" << endl;
    }
}
int main()
{
    Engineering::course();
    Medical::course();
return 0;
}
