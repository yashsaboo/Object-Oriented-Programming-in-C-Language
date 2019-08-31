/*WAP to implement Multiple Inheritance in C++*/

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

//Area*factor
class cost
{
	public:
		void paintCost(int a)
		{
			cout<<"\nThe painting cost is "<<5000*a;
		}
		
};

class rectangle:public shape, public cost
{
	public:
	int a;
	int getArea()
	{
		a=height*width;
		cout<<"The area is "<<a;
		return a;
	}
	
};

int main()
{
	int a;
	rectangle thing;
	thing.setWidth(20);
	thing.setHeight(10);
	a=thing.getArea();
	thing.paintCost(a);
	return 0;
}
