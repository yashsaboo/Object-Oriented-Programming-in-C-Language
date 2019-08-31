/* WAP to portray Object Equality concept in C++*/

#include<iostream>
#include <conio.h>

using namespace std;
class Display
{
		public:
		int x;
		int y;

	Display()
	{
		x=10;
		y=20;
	}
 	Display(int a, int b)
	{
		x=a;
		y=b;
	}

	void display()
	{
			cout<<"The value of x:"<<x<<endl;
			cout<<"The value of y:"<<y<<endl;
	}
};

int main()
{
	Display Object;
	Display ob1(100,200);
	Object.display();
	ob1.display();
	Object =ob1;
	Object.display();
	getch();
	return 0;
}
