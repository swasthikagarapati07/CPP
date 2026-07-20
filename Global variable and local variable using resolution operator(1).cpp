#include <iostream>
using namespace std;
int x = 100;  
int main()
{
    int x = 50;   
    cout << "Local variable: " << x << endl;
    cout << "Global variable: " << ::x << endl;
    return 0;
}
