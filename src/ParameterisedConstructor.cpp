/* WAP to portray Parameterised Constructor concept in C++*/

#include<iostream>
#include <conio.h>

using namespace std;
class Display
{
		public:
		int x;
		int y;

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
	Display ob(10,20);
	ob.display();

	getch();
	return 0;
}
