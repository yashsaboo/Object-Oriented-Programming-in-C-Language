/* WAP to portray Function Overloading concept in C++: function Area calucluating area of shape based on arguments*/

#include <iostream>
#include <conio.h>
using namespace std;
void area(int radius)
{
	double area = (22/7)*radius*radius;
	cout<<"The area is "<<area;
}
void area(int base, int alt)
{
	double area = base*alt/2;
	cout<<"The area is "<<area;
}
void area (double side)
{
	double area = side*side;
	cout<<"The area is "<<area;
}
main()
{
	int n,i=0,j; double f; int sum=0;	
	cout<<"Enter the choice for area: 1.Circle 2.Triangle 3.Square";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"Enter the radius";
			cin>>i; area(i);
			break;			
		case 2:
			cout<<"Enter the base and altitude";
			cin>>i>>j; area(i,j);
			break;			
		case 3:
			cout<<"Enter the side of a square";
			cin>>f; area(f);
			break;
	}
}
	
	
