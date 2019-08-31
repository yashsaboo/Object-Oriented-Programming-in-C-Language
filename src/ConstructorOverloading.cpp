/* WAP to portray Constructor Overloading concept in C++*/

#include <stdio.h>
#include <iostream>

using namespace std;

class Area
{
	int area1;
	public:
		Area()
		{
			area1=0;
		}
		Area(int);
		Area(int, int);
		void display();
		
};
 Area :: Area(int r)
{
	area1 = r*r;
}
Area :: Area(int r, int s)
{
	area1= r*s;
}
void Area :: display()
{
	cout<<area1;
}

main()
{
	int a=2,b=3,c=4;
	Area o1,o2,o3;
	Area *a222[2];
	o2 = Area(a);
	o3 = Area(b,c);
	cout<<"Area of square: ";o2.display();
	cout<<"\nArea of rectangle ";o3.display();
}
