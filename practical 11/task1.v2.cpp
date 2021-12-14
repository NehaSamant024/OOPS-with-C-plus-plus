#include <iostream>

using namespace std;

class A
{
	public:
		int x;
		int y;
};

class B:public A
{
	public:
		void display()
		{
			//x=10;
			//y=20;
			cout<<"Value 1st using inheritence: "<<x<<"\n";
			cout<<"Value 2nd using inheritence: "<<y<<"\n";
		}
};
int main()
{
	B obj;
	obj.x=30;
	obj.y=40;
	obj.display();
	return 0;
}
