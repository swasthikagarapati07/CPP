#include<iostream>
#include<string>
using namespace std;
class B;
class A
{
	int a;
	public:A()
	{
		a=10;
	}
	friend void swapping(A &,B &);
};
class B
{
	int b;
	public:B()
	{
		b=20;
	}
	friend void swapping(A &,B &);
};
void swapping(A &x,B &y)
{
	int temp;
	temp = x.a;
	x.a = y.b;
	y.b = temp;
	cout<<"After swapping"<<x.a<<" "<<y.b<<endl;
}
int main()
{
	A a1;
	B b1;
	swapping(a1,b1);
	return 0;
}
