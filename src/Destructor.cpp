/*WAP to portray Destructor concept in C++: create 5 objects and delete 3 objects*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
//int r=0;
class object
{
	public:
		object()
		{
			//r++;
			cout<<"\nConstructor ";
		}
		~object()
		{
			//r--;
			cout<<"\nDestructor";
		}
};

main()
{
	object *a4 = new object;
	object *a5 = new object;
	object *a1 = new object;
	object *a2 = new object;
	object *a3 = new object;
	delete a1;
	delete a2;
	delete a3;
}
