/*WAP to implement Inheritance in C++*/

#include <iostream>
using namespace std;
class shape
{
	public:
	void setWidth(int w)
	{
		width=w;
	}
	void setHeight(int h)
	{
		height=h;
	}
	protected:
		int width;
		int height;
	
};

class rectangle:public shape
{
	public:
		int getArea()
		{
			return width*height;
		}
};

int main()
{
	int a;
	rectangle thing;
	thing.setWidth(20);
	thing.setHeight(10);
	a=thing.getArea();
	cout<<"The area of the rectangle is "<<a;
	return 0;
}

