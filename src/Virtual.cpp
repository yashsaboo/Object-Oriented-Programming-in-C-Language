/* WAP to portray Virtual Class concept in C++: function Area calucluating area of shape based on arguments*/

#include<iostream>
#include <conio.h>
using namespace std;

class B
{
	public:
		virtual void display()
		{
			cout<<"Base Class"<<endl;		
		}
};
class D1: public B
{
	public:
		void display()
		{
			cout<<"First Class"<<endl;		
		}
};
class D2: public B
{
	public:
		void display()
		{
			cout<<"Second Class"<<endl;		
		}
};
int main()
{
	D1 obj1;
	D2 obj2;
	B *t;
	t=&obj1;
	t->display();
	t=&obj2;
	t->display();
	getch();
	return 0;
}
