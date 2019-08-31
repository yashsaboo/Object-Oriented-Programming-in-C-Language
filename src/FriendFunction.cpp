/* WAP to portray Friend Function concept in C++ */

#include <iostream>
using namespace std;
class shape
{
	public:
	void setWidth(int w)
	{
		width=w;
	}
	friend void printwidth(shape rect)
	{
		cout<<"Width: "<<rect.width;
	}
	protected:
		int width;

	
};

int main()
{
	shape rect;
	rect.setWidth(12);
	printwidth(rect);
	return 0;
}


