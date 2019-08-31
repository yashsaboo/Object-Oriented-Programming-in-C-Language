/*WAP to portray Operator Overloading concept in C++*/

#include <stdio.h>
#include <iostream>

using namespace std;

class oper
{

	public:
		int x;
		oper();	
		void operator ++(int);
		void operator -();
		void display();
		friend oper operator +(oper &, oper &);
		friend void operator +=(oper &, oper &);
		//friend void operator +=(oper &, oper &);//wont compiile as assignment cant be overloaded.
		friend ostream &operator <<(ostream &out, const oper &d);
		friend istream &operator >>(istream &inn, const oper &d);
};
oper::oper()
{
	x=10;
}

void oper:: operator ++(int)
{
	x++;
}

void oper:: operator -()
{
	--x;
}

void oper:: display()
{
	cout<<x<<endl;
}

oper operator +(oper &a1, oper &b1)
{
	oper z;
	z.x=a1.x +b1.x;
	return z;
}

void operator +=(oper &a1, oper &b1)
{
	a1.x +=b1.x;
}

ostream &operator <<(ostream &out, const oper &d)
{
	out<<"X: "<<d.x;
	return out;
}

istream &operator >>(istream &inn, oper &d)
{
	inn >> d.x;
	return inn;
}

main()
{
	oper a,b,c;
	a++;
	-b;
	a.display();
	b.display();
	c=a+b;
	c.display();
	c+=b;
	c.display();
	cin>>c;
	cout<<c;
}
